@class NSMutableArray;

@interface _UIBannerContainerView : UIView

@property (retain, nonatomic) NSMutableArray *banners;
@property (retain, nonatomic) NSMutableArray *constraints;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)statusBarFrameDidChange:(id)a0;
- (void)_setBanner:(id)a0 visible:(BOOL)a1 alongsideAnimations:(id)a2 completion:(id /* block */)a3;
- (void)_presentBanner:(id)a0 completion:(id /* block */)a1;
- (void)_dismissBanner:(id)a0 alongsideAnimations:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)updateConstraints;

@end
