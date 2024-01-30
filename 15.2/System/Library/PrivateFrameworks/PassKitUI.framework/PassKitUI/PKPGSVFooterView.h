@class PKContinuousButton;
@protocol PKPGSVFooterViewDelegate;

@interface PKPGSVFooterView : UIView {
    PKContinuousButton *_editButton;
}

@property (weak, nonatomic) id<PKPGSVFooterViewDelegate> delegate;
@property (nonatomic) long long expiredSectionCount;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)_editTapped:(id)a0;

@end
