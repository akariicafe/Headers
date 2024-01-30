@class AVRouteDetectorInternal;

@interface AVRouteDetector : NSObject {
    AVRouteDetectorInternal *_routeDetectorInternal;
}

@property (getter=isRouteDetectionEnabled) BOOL routeDetectionEnabled;
@property (readonly) BOOL multipleRoutesDetected;

+ (void)initialize;

- (void)_updateMultipleRoutesDetected;
- (id)init;
- (void)dealloc;

@end
