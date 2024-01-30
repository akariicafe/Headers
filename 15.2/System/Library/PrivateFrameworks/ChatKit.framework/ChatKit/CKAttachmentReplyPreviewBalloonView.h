@class UILabel, CKMediaObject;

@interface CKAttachmentReplyPreviewBalloonView : CKColoredBalloonView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) CKMediaObject *mediaObject;

- (void)prepareForDisplay;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;
- (void)configureForComposition:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)description;
- (void).cxx_destruct;
- (void)configureForMediaObject:(id)a0 previewWidth:(double)a1 orientation:(char)a2;
- (void)prepareForReuse;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (id)attachmentTitleForMediaObject:(id)a0;
- (void)configureForMessagePart:(id)a0;

@end
