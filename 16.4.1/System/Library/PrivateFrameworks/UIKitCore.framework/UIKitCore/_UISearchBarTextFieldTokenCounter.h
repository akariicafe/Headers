@class NSIndexSet, NSMutableIndexSet, NSTextStorage;

@interface _UISearchBarTextFieldTokenCounter : NSObject {
    id _textStorageObservation;
    NSTextStorage *_textStorage;
    NSMutableIndexSet *_tokenCharacterIndexes;
}

@property (readonly, nonatomic) NSIndexSet *tokenCharacterIndexes;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } characterRangeOfAllTokens;

- (id)tokenAtCharacterIndex:(unsigned long long)a0;
- (void)_handleProcessEditing;
- (unsigned long long)characterIndexForSelectingOrRemovingTokenAtIndex:(unsigned long long)a0;
- (void)_addCharacterIndexesOfTokensInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 toIndexSet:(id)a1;
- (unsigned long long)characterIndexForInsertingTokenAtIndex:(unsigned long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })subrangeOfTextAfterLastTokenForCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned long long)indexOfTokenAtCharacterIndex:(unsigned long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })characterRangeForSubrangeOfTextAfterLastToken:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void).cxx_destruct;
- (id)initWithTextStorage:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })characterRangeOfTextAfterLastToken;

@end
