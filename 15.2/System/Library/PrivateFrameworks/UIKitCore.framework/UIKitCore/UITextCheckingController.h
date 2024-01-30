@class UITextChecker;
@protocol UITextCheckingClient;

@interface UITextCheckingController : NSObject {
    id<UITextCheckingClient> _client;
    UITextChecker *_textChecker;
    struct _NSRange { unsigned long long location; unsigned long long length; } _selectedRangeFromPreviousUnchecked;
    struct __tccClientFlags { unsigned char respondsToAutocorrectionType : 1; unsigned char respondsToSpellCheckingType : 1; unsigned char respondsToSmartQuotesType : 1; unsigned char respondsToSmartDashesType : 1; unsigned char respondsToSmartInsertDeleteType : 1; unsigned char respondsToContinuousSpellCheckingEnabled : 1; } _tccClientFlags;
}

@property (readonly) id<UITextCheckingClient> client;

- (id)textChecker;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })nsRangeForTextRange:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })selectedRange;
- (id)initWithClient:(id)a0;
- (void)preheatTextChecker;
- (void)checkSpellingForWordInRange:(id)a0;
- (id)validAnnotations;
- (void)insertedTextInRange:(id)a0;
- (BOOL)continuousSpellCheckingEnabled;
- (void)didChangeSelectionFromRange:(id)a0;
- (void)didChangeTextInRange:(id)a0;
- (void)removeSpellingMarkersFromWordInRange:(id)a0;
- (void)considerTextCheckingForRange:(id)a0;
- (void)invalidate;
- (id)keyboardLanguages;
- (void)dealloc;
- (void)checkSpellingForSelectionChangeFromRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)foundApostropheAfterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
