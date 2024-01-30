@interface AVRouteDetectorCoordinator : NSObject

@property (nonatomic, getter=isRouteDetectionEnabled) BOOL routeDetectionEnabled;
@property (readonly, nonatomic) BOOL multipleRoutesDetected;

+ (BOOL)multipleRoutesDetected;
+ (void)endDetectingRoutes;
+ (void)beginDetectingRoutes;
+ (id)routeDetectorCoordinatorQueue;
+ (id)sharedSystemRouteDetector;
+ (void)updateMultipleRoutesDetected;
+ (void)setMultipleRoutesDetected:(BOOL)a0;

- (void)dealloc;

@end
