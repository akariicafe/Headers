@class NSArray, AVWeakReference, AVDispatchOnce, NSData, NSObject, NSMutableDictionary;
@protocol OS_dispatch_queue, AVExternalDeviceDelegate;

@interface AVExternalDeviceInternal : NSObject {
    struct OpaqueFigEndpoint { } *_figEndpoint;
    id<AVExternalDeviceDelegate> _delegate;
    AVWeakReference *_weakReference;
    NSArray *_HIDs;
    AVDispatchOnce *_makeHIDsOnlyOnce;
    NSData *_MFiCertSerial;
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_oemIcons;
    NSArray *_screenInfo;
    NSObject<OS_dispatch_queue> *_viewAreasQueue;
    NSMutableDictionary *_currentViewAreas;
    AVDispatchOnce *_makeIconsOnlyOnce;
}

@end
