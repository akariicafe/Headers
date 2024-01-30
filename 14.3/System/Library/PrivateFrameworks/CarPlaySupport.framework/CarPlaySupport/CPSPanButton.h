@class NSString, UIView;

@interface CPSPanButton : UIButton <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIView *backgroundView;
@property (readonly, nonatomic) long long direction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void).cxx_destruct;
- (id)initWithDirection:(long long)a0;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void)_updateColors;
- (void)_setupPanImages;

@end
