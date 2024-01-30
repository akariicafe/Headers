@class NSString, ACCConnectionInfo, NSObject;
@protocol OS_dispatch_queue;

@interface BWFigCaptureAttachedAccessoriesMonitor : NSObject <ACCConnectionInfoDelegateProtocol> {
    ACCConnectionInfo *_connectionInfoProvider;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSString *_walletAccessoryUUID;
    NSString *_batteryPackAccessoryUUID;
}

@property (readonly, nonatomic) BOOL walletAccessoryConnected;
@property (readonly, nonatomic) BOOL batteryPackAccessoryConnected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)sharedAttachedAccessoriesMonitor;

@end
