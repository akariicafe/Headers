@interface AVRouteDetectorCoordinator : NSObject

@property (nonatomic, getter=isRouteDetectionEnabled) BOOL routeDetectionEnabled;
@property (readonly, nonatomic) BOOL multipleRoutesDetected;

+ (void)endDetectingRoutes;
+ (void)beginDetectingRoutes;
+ (id)routeDetectorCoordinatorQueue;
+ (id)sharedSystemRouteDetector;
+ (void)updateMultipleRoutesDetected;
+ (void)setMultipleRoutesDetected:(BOOL)a0;
+ (BOOL)multipleRoutesDetected;

- (void)dealloc;

@end
