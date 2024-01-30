@class ICAttachmentInsertionController, NSMutableDictionary, ICNote, NSMutableSet, ICHashtagsNode, ICTableColumnTextView, UITextView;
@protocol ICHashtagKeyboardDelegate, ICHashtagAnalyticsDelegate;

@interface ICHashtagController : NSObject

@property (weak, nonatomic) ICNote *note;
@property (retain, nonatomic) NSMutableDictionary *hashtagSuggestionsDictionary;
@property (retain, nonatomic) NSMutableSet *hashtagsNames;
@property (retain, nonatomic) ICHashtagsNode *hashtagsTree;
@property (nonatomic) unsigned long long maxNameLength;
@property (readonly, nonatomic) BOOL allowsHashtag;
@property (nonatomic) BOOL isUpdatingKeyboard;
@property (weak, nonatomic) id<ICHashtagKeyboardDelegate> hashtagKeyboardDelegate;
@property (weak, nonatomic) id<ICHashtagKeyboardDelegate> hashtagTableKeyboardDelegate;
@property (weak, nonatomic) ICAttachmentInsertionController *attachmentInsertionController;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } editedRange;
@property (readonly, nonatomic) unsigned long long maxLengthOfStringForCheckingHashtag;
@property (weak, nonatomic) ICTableColumnTextView *tableTextView;
@property (weak, nonatomic) UITextView *textView;
@property (weak, nonatomic) id<ICHashtagAnalyticsDelegate> analyticsDelegate;

+ (BOOL)isValidPostfixCharacter:(unsigned short)a0;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 appendingSubstringRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (BOOL)range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 hasValidPostfixCharacterForString:(id)a1;
+ (BOOL)isBeginningHashtagAtSelectionRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inString:(id)a1 languageHasSpaces:(BOOL)a2;
+ (BOOL)range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 hasValidPrefixCharacterForString:(id)a1 languageHasSpaces:(BOOL)a2;
+ (BOOL)range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 isPrefixedWithHashtagForString:(id)a1;
+ (BOOL)isValidPrefixCharacter:(unsigned short)a0 languageHasSpaces:(BOOL)a1;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfLastCharacterInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
+ (BOOL)shouldAutoConvertToTag;

- (void).cxx_destruct;
- (void)dealloc;
- (void)updateHashtagsAssociations;
- (void)crossAppHashtagDidChange:(id)a0;
- (void)accountWasDeleted:(id)a0;
- (void)associateHashtagSuggestion:(id)a0 withKey:(id)a1;
- (id)initWithNote:(id)a0;
- (void)updateNoteHashtags;
- (id)checkForHashtagInString:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 selectionRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 languageHasSpaces:(BOOL)a3;
- (id)hashtagSuggestionsForKey:(id)a0;

@end
