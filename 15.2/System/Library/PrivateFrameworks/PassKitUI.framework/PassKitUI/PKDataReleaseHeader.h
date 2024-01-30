@class UILabel, UIButton;
@protocol PKDataReleaseHeaderDelegate;

@interface PKDataReleaseHeader : UIView {
    id<PKDataReleaseHeaderDelegate> _delegate;
    UILabel *_label;
    UIButton *_dismissButton;
}

- (void)layoutSubviews;
- (id)initWithDelegate:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)_dismiss;

@end
