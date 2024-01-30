@class UIView;

@interface SBHPopoverView : UIView

@property (retain, nonatomic) UIView *backgroundView;

- (id)_createBackgroundView;
- (void).cxx_destruct;
- (id)_arrowViewForArrowLocation:(long long)a0 arrowSize:(double)a1;
- (id)initWithArrowLocation:(long long)a0;

@end
