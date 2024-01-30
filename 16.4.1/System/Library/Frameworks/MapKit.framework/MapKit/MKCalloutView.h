@class MKAnnotationView;

@interface MKCalloutView : UIView <_MKMotionEffectDelegate>

@property (readonly, weak, nonatomic) MKAnnotationView *annotationView;
@property (readonly, nonatomic) long long anchorPosition;
@property (readonly, nonatomic, getter=isVisible) BOOL visible;
@property (readonly, nonatomic) BOOL hasPendingVisibility;
@property (nonatomic) BOOL parallaxEnabled;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)annotationViewFrameDidChange;
- (void)dismissAnimated:(BOOL)a0 completionBlock:(id /* block */)a1;
- (id)initWithAnnotationView:(id)a0;
- (void)motionEffectDidUpdate:(id)a0;
- (void)showAnimated:(BOOL)a0 completionBlock:(id /* block */)a1;

@end
