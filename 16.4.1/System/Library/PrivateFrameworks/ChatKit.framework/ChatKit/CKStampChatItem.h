@interface CKStampChatItem : CKChatItem

- (unsigned long long)layoutType;
- (Class)cellClass;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInsets;
- (BOOL)displayDuringSend;
- (id)layoutItemSpacingWithEnvironment:(id)a0 datasourceItemIndex:(long long)a1 allDatasourceItems:(id)a2 supplementryItems:(id)a3;
- (char)transcriptOrientation;

@end
