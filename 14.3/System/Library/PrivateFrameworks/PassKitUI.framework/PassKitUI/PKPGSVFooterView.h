@class PKContinuousButton;
@protocol PKPGSVFooterViewDelegate;

@interface PKPGSVFooterView : UIView {
    PKContinuousButton *_editButton;
}

@property (weak, nonatomic) id<PKPGSVFooterViewDelegate> delegate;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_editTapped:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
