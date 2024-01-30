@class AVRouteDetectorInternal;

@interface AVRouteDetector : NSObject {
    AVRouteDetectorInternal *_routeDetectorInternal;
}

@property (getter=isRouteDetectionEnabled) BOOL routeDetectionEnabled;
@property (readonly) BOOL multipleRoutesDetected;

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (void)_updateMultipleRoutesDetected;

@end
