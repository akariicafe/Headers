@class IMBalloonPluginDataSource, LPLinkMetadata, LPLinkView;

@interface CKRichLinkReplyPreviewBalloonView : CKColoredBalloonView

@property (retain, nonatomic) LPLinkView *linkView;
@property (retain, nonatomic) LPLinkMetadata *linkMetadata;
@property (retain, nonatomic) IMBalloonPluginDataSource *dataSource;

- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)description;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;
- (void)configureForTranscriptPlugin:(id)a0;

@end
