@class ACCConnectionInfo, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface BWFigCaptureAttachedAccessoriesMonitor : NSObject {
    ACCConnectionInfo *_connectionInfoProvider;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSString *_walletAccessoryUUID;
    NSString *_batteryPackAccessoryUUID;
}

@property (readonly, nonatomic) BOOL walletAccessoryConnected;
@property (readonly, nonatomic) BOOL batteryPackAccessoryConnected;

+ (void)initialize;
+ (id)sharedAttachedAccessoriesMonitor;

- (void)accessoryConnectionDetached:(id)a0;
- (void)accessoryEndpointAttached:(id)a0 transportType:(int)a1 protocol:(int)a2 forConnection:(id)a3;
- (id)init;
- (void)dealloc;

@end
