@class NRDeviceIdentifier, NSObject;
@protocol OS_dispatch_queue, NRDeviceMonitorDelegate, OS_xpc_object;

@interface NRDeviceMonitor : NSObject {
    BOOL _didIssueFirstUpdate;
    BOOL _internalIsRegistered;
    BOOL _internalIsEnabled;
    BOOL _internalIsNearby;
    BOOL _internalIsConnected;
    BOOL _internalIsCloudConnected;
    BOOL _internalIsAsleep;
    BOOL _internalIsClassCConnected;
    BOOL _internalHasUnpairedBluetooth;
    unsigned char _internalLinkType;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NRDeviceIdentifier *_internalDeviceIdentifier;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    id<NRDeviceMonitorDelegate> _delegate;
    NSObject<OS_xpc_object> *_connection;
}

@property (readonly, nonatomic) NRDeviceIdentifier *deviceIdentifier;
@property (readonly, nonatomic) BOOL isRegistered;
@property (readonly, nonatomic) BOOL isEnabled;
@property (readonly, nonatomic) BOOL isNearby;
@property (readonly, nonatomic) BOOL isConnected;
@property (readonly, nonatomic) BOOL isCloudConnected;
@property (readonly, nonatomic) BOOL isAsleep;
@property (readonly, nonatomic) unsigned char linkType;
@property (readonly, nonatomic) BOOL isClassCConnected;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDeviceIdentifier:(id)a0 delegate:(id)a1 queue:(id)a2;

@end
