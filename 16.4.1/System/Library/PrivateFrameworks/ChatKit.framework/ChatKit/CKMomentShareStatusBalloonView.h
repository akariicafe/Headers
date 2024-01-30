@class UIImageView, UILabel;

@interface CKMomentShareStatusBalloonView : CKColoredBalloonView {
    UIImageView *_iconImageView;
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
}

+ (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
+ (id)_secondaryLabelString;

- (char)color;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })_performLayoutInSize:(struct CGSize { double x0; double x1; })a0 updateSubviewFrames:(BOOL)a1;

@end
