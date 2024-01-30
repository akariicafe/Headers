@interface CKReplySenderChatItem : CKSenderChatItem

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInsets;
- (double)_calculateAdditionalOffsetForTapbackWithNextItem:(id)a0 previousItem:(id)a1 associatedChatItem:(id)a2;
- (id)layoutItemSpacingWithEnvironment:(id)a0 datasourceItemIndex:(long long)a1 allDatasourceItems:(id)a2 supplementryItems:(id)a3;
- (id)loadTranscriptText;
- (char)transcriptOrientation;

@end
