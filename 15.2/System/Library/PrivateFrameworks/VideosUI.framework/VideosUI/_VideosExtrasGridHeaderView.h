@class MPUArtworkView, NSArray, MPUContentSizeLayoutConstraint, UILabel, NSLayoutConstraint, UIView;

@interface _VideosExtrasGridHeaderView : UIView {
    NSArray *_artworkSizeConstraints;
    NSArray *_textLeadingConstraints;
    MPUContentSizeLayoutConstraint *_topLabelConstraint;
    MPUContentSizeLayoutConstraint *_subtitleBaselineConstraint;
    NSLayoutConstraint *_bottomLabelConstraint;
    MPUContentSizeLayoutConstraint *_bottomLabelSpacerHeight;
    MPUArtworkView *_artworkView;
    UILabel *_subtitleLabel;
    UIView *_bottomLabelSpacer;
}

@property (readonly, nonatomic) UILabel *titleLabel;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)configureForImage:(id)a0 title:(id)a1 subtitle:(id)a2 style:(id)a3;

@end
