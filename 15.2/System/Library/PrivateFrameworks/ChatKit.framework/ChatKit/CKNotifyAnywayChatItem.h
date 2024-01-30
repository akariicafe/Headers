@interface CKNotifyAnywayChatItem : CKChatItem

- (unsigned long long)layoutType;
- (struct CGSize { double x0; double x1; })loadSizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(out struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInsets;
- (char)transcriptOrientation;
- (BOOL)displayDuringSend;
- (id)notifyAnywayChatItem;
- (id)layoutItemSpacingWithEnvironment:(id)a0 datasourceItemIndex:(long long)a1 allDatasourceItems:(id)a2 supplementryItems:(id)a3;
- (id)loadTranscriptText;
- (Class)cellClass;

@end
