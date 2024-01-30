@class NSString, UIViewController;

@interface _PHUIViewControllerDefaultTransitionEndPoint : NSObject <PXUIViewControllerTransitionEndPoint, PXUIViewControllerZoomTransitionEndPoint>

@property (readonly, weak, nonatomic) UIViewController *viewController;
@property (readonly, nonatomic) BOOL keepsSourceRegionOfInterestContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)zoomAnimationCoordinatorForZoomTransition:(id)a0;
- (id)contentViewForZoomTransition:(id)a0;
- (id)regionOfInterestForTransition:(id)a0;
- (void)preloadWithSourceRegionOfInterest:(id)a0 forTransition:(id)a1;
- (id)removeBackgroundColorForTransition:(id)a0;
- (void)restoreBackgroundColor:(id)a0 forTransition:(id)a1;
- (id)initWithViewController:(id)a0;

@end
