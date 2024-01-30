@interface AVRouteDetectorCoordinator : NSObject

@property (nonatomic, getter=isRouteDetectionEnabled) BOOL routeDetectionEnabled;
@property (readonly, nonatomic) BOOL multipleRoutesDetected;

+ (BOOL)multipleRoutesDetected;
+ (void)beginDetectingRoutes;
+ (void)endDetectingRoutes;
+ (id)routeDetectorCoordinatorQueue;
+ (void)setMultipleRoutesDetected:(BOOL)a0;
+ (id)sharedSystemRouteDetector;
+ (void)updateMultipleRoutesDetected;

- (void)dealloc;

@end
