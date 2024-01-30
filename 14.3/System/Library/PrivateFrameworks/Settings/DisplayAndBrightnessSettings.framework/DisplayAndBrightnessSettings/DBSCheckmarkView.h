@class UIImageView;

@interface DBSCheckmarkView : UIView

@property (retain, nonatomic) UIImageView *_checkmarkImageView;
@property (retain, nonatomic) UIImageView *_circleImageView;
@property (nonatomic, getter=isSelected) BOOL selected;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_configureView;
- (void)_updateViewState;

@end
