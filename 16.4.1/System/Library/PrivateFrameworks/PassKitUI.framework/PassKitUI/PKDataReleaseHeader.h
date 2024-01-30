@class UILabel, UIButton, UIImageView;
@protocol PKDataReleaseHeaderDelegate;

@interface PKDataReleaseHeader : UIView {
    id<PKDataReleaseHeaderDelegate> _delegate;
    UILabel *_label;
    UIButton *_dismissButton;
    UIImageView *_logo;
}

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithDelegate:(id)a0;
- (void)layoutSubviews;
- (void)_dismiss;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;

@end
