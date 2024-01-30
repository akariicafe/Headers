@class UITextChecker;
@protocol UITextCheckingClient;

@interface UITextCheckingController : NSObject {
    id<UITextCheckingClient> _client;
    UITextChecker *_textChecker;
    struct _NSRange { unsigned long long location; unsigned long long length; } _selectedRangeFromPreviousUnchecked;
    struct __tccClientFlags { unsigned char respondsToAutocorrectionType : 1; unsigned char respondsToSpellCheckingType : 1; unsigned char respondsToSmartQuotesType : 1; unsigned char respondsToSmartDashesType : 1; unsigned char respondsToSmartInsertDeleteType : 1; unsigned char respondsToContinuousSpellCheckingEnabled : 1; } _tccClientFlags;
}

@property (readonly) id<UITextCheckingClient> client;

- (id)initWithClient:(id)a0;
- (void)checkSpellingForSelectionChangeFromRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)keyboardLanguages;
- (void)considerTextCheckingForRange:(id)a0;
- (BOOL)foundApostropheAfterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)dealloc;
- (id)textChecker;
- (void)didChangeSelectionFromRange:(id)a0;
- (id)validAnnotations;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })selectedRange;
- (void)insertedTextInRange:(id)a0;
- (void)checkSpellingForWordInRange:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })nsRangeForTextRange:(id)a0;
- (void)removeSpellingMarkersFromWordInRange:(id)a0;
- (void)preheatTextChecker;
- (void)didChangeTextInRange:(id)a0;
- (void)invalidate;
- (BOOL)continuousSpellCheckingEnabled;

@end
