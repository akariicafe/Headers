@class NSIndexSet, NSMutableIndexSet, NSTextStorage;

@interface _UISearchBarTextFieldTokenCounter : NSObject {
    id _textStorageObservation;
    NSTextStorage *_textStorage;
    NSMutableIndexSet *_tokenCharacterIndexes;
}

@property (readonly, nonatomic) NSIndexSet *tokenCharacterIndexes;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } characterRangeOfAllTokens;

- (id)initWithTextStorage:(id)a0;
- (unsigned long long)characterIndexForSelectingOrRemovingTokenAtIndex:(unsigned long long)a0;
- (unsigned long long)characterIndexForInsertingTokenAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)tokenAtCharacterIndex:(unsigned long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })subrangeOfTextAfterLastTokenForCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned long long)indexOfTokenAtCharacterIndex:(unsigned long long)a0;
- (void)_addCharacterIndexesOfTokensInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 toIndexSet:(id)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })characterRangeOfTextAfterLastToken;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })characterRangeForSubrangeOfTextAfterLastToken:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)_handleProcessEditing;

@end
