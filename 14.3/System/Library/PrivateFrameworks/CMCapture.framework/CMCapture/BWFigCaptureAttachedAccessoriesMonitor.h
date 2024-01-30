@class ACCConnectionInfo, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface BWFigCaptureAttachedAccessoriesMonitor : NSObject {
    ACCConnectionInfo *_connectionInfoProvider;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSString *_walletAccessoryUUID;
}

@property (readonly, nonatomic) BOOL walletAccessoryConnected;

+ (void)initialize;
+ (id)sharedAttachedAccessoriesMonitor;

- (id)init;
- (void)dealloc;
- (void)accessoryConnectionDetached:(id)a0;
- (void)accessoryEndpointAttached:(id)a0 transportType:(int)a1 protocol:(int)a2 forConnection:(id)a3;

@end
