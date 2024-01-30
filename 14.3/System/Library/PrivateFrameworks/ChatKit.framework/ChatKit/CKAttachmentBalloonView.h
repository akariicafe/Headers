@class UIView;
@protocol CKAttachmentView;

@interface CKAttachmentBalloonView : CKColoredBalloonView

@property (retain, nonatomic) UIView<CKAttachmentView> *attachmentView;

- (id)overlayImage;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)configureForMediaObject:(id)a0 previewWidth:(double)a1 orientation:(char)a2;
- (void)setMediaObject:(id)a0;
- (void)dealloc;
- (void)configureForComposition:(id)a0;
- (void)prepareForReuse;
- (void)transferUpdated:(id)a0;
- (void)richIconDidChange:(id)a0;
- (id)description;
- (void)layoutSubviews;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;
- (void)configureForMessagePart:(id)a0;

@end
