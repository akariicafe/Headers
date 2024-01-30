@class NSString, UIImageView, UIVisualEffectView, UILabel;
@protocol CKTitledImageBalloonViewDelegate;

@interface CKTitledImageBalloonView : CKImageBalloonView

@property (retain, nonatomic) UIImageView *chevron;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (copy, nonatomic) NSString *title;
@property (weak, nonatomic) id<CKTitledImageBalloonViewDelegate> delegate;

- (void)prepareForDisplay;
- (void)setOrientation:(char)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)tapGestureRecognized:(id)a0;
- (void)configureForLocatingChatItem:(id)a0;
- (void)configureForMediaObject:(id)a0 previewWidth:(double)a1 orientation:(char)a2 hasInvisibleInkEffect:(BOOL)a3;

@end
