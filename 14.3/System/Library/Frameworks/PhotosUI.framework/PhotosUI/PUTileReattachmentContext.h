@class NSMapTable;

@interface PUTileReattachmentContext : NSObject

@property (readonly, nonatomic) NSMapTable *_tileControllerVelocities;
@property (nonatomic, setter=setZoomingIn:) BOOL isZoomingIn;
@property (nonatomic, setter=setTransitioningOverOneUp:) BOOL isTransitioningOverOneUp;

- (void).cxx_destruct;
- (void)setVelocity:(struct PUDisplayVelocity { double x0; double x1; double x2; double x3; })a0 forTileController:(id)a1;
- (struct PUDisplayVelocity { double x0; double x1; double x2; double x3; })velocityForTileController:(id)a0;

@end
