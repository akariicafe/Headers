@interface CKSenderChatItem : CKChatItem

- (BOOL)isEditable;
- (char)transcriptOrientation;
- (unsigned long long)layoutType;
- (Class)cellClass;
- (id)cellIdentifier;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInsets;
- (BOOL)wantsDrawerLayout;
- (id)loadTranscriptText;
- (struct CGSize { double x0; double x1; })loadSizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(out struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;
- (id)layoutGroupSpacingForEnvironment:(id)a0 supplementaryItems:(id)a1;

@end
