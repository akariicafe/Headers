@class NSObject;
@protocol OS_dispatch_queue, BWDeviceOrientationMonitorPortraitLandscapeUpdateDelegate;

@interface BWDeviceOrientationMonitor : NSObject {
    int _orientationDispatchToken;
    NSObject<OS_dispatch_queue> *_orientationNotificationDispatchQueue;
    unsigned int _currentOrientation;
    struct OpaqueFigSimpleMutex { } *_stateMutex;
}

@property (readonly, nonatomic) unsigned int mostRecentPortraitLandscapeOrientation;
@property (nonatomic) id<BWDeviceOrientationMonitorPortraitLandscapeUpdateDelegate> portraitLandscapeUpdateDelegate;

+ (void)initialize;

- (void)dealloc;
- (BOOL)stop;
- (id)init;
- (BOOL)start;

@end
