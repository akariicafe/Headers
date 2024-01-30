@class AVOutputDeviceDiscoverySession, NSObject;
@protocol OS_dispatch_queue;

@interface AVRouteDetectorInternal : NSObject {
    BOOL multipleRoutesDetected;
    NSObject<OS_dispatch_queue> *ivarAccessQueue;
    AVOutputDeviceDiscoverySession *outputDeviceDiscoverySession;
    id outputDevicesChangeNotificationToken;
}

@end
