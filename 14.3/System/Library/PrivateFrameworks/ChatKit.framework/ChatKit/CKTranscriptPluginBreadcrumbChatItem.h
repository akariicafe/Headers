@class UIImage, IMTranscriptPluginBreadcrumbChatItem, CKTranscriptPluginChatItem;

@interface CKTranscriptPluginBreadcrumbChatItem : CKMultilineStampChatItem

@property (readonly, nonatomic) IMTranscriptPluginBreadcrumbChatItem *IMChatItem;
@property (readonly, nonatomic) UIImage *iconImage;
@property (readonly, nonatomic) double iconWidthPlusPadding;
@property (retain, nonatomic) CKTranscriptPluginChatItem *previousPluginChatItem;

- (void).cxx_destruct;
- (char)transcriptOrientation;
- (unsigned long long)layoutType;
- (Class)cellClass;
- (BOOL)_wantsCenteredOrientation;
- (BOOL)_wantsIconImage;
- (unsigned long long)_breadcrumbOptionFlags;
- (id)loadTranscriptText;
- (struct CGSize { double x0; double x1; })loadSizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(out struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;
- (id)layoutGroupSpacingForEnvironment:(id)a0 supplementaryItems:(id)a1;

@end
