@class NSArray, MPUContentSizeLayoutConstraint, UILabel, NSLayoutConstraint, UIView;

@interface VideosExtrasCollectionReusableView : UICollectionReusableView {
    UILabel *_textLabel;
    MPUContentSizeLayoutConstraint *_textTopConstraint;
    NSLayoutConstraint *_textLeftConstraint;
    MPUContentSizeLayoutConstraint *_textBottomConstraint;
    NSLayoutConstraint *_textRightConstraint;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _labelInsets;
    UIView *_borderView;
    NSArray *_borderConstraints;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_configureConstraintsForInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)configureForHeaderElement:(id)a0 headerStyle:(id)a1;

@end
