@class UIImage, IMTranscriptPluginBreadcrumbChatItem, CKTranscriptPluginChatItem;

@interface CKTranscriptPluginBreadcrumbChatItem : CKMultilineStampLabelChatItem

@property (readonly, nonatomic) IMTranscriptPluginBreadcrumbChatItem *IMChatItem;
@property (readonly, nonatomic) UIImage *iconImage;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } iconSizePlusHorizontalPadding;
@property (retain, nonatomic) CKTranscriptPluginChatItem *previousPluginChatItem;

- (unsigned long long)layoutType;
- (Class)cellClass;
- (void).cxx_destruct;
- (BOOL)_wantsIconImage;
- (unsigned long long)_breadcrumbOptionFlags;
- (BOOL)_wantsCenteredOrientation;
- (id)layoutItemSpacingWithEnvironment:(id)a0 datasourceItemIndex:(long long)a1 allDatasourceItems:(id)a2 supplementryItems:(id)a3;
- (struct CGSize { double x0; double x1; })loadSizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(out struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;
- (id)loadTranscriptText;
- (char)transcriptOrientation;

@end
