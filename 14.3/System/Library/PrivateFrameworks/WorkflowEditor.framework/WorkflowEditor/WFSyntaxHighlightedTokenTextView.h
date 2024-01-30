@class NSString, WFSyntaxHighlightingPluginManager, NSMutableArray;

@interface WFSyntaxHighlightedTokenTextView : WFTextTokenTextView <NSTextStorageDelegate> {
    NSMutableArray *_lineIndices;
}

@property (retain, nonatomic) WFSyntaxHighlightingPluginManager *pluginManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setAttributedText:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)setVariableString:(id)a0;
- (void)textUpdated;
- (unsigned long long)currentSyntaxHighlightingAppearance;
- (void)updateHighlighting;
- (void)synchronizeTokenManagerWithTextStorage:(id)a0;
- (void)updateLineIndicesForTextStorage:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })lineRangeForCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
