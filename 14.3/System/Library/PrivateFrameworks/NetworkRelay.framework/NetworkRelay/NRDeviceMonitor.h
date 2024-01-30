@class NRDeviceIdentifier, NSObject;
@protocol OS_dispatch_queue, NRDeviceMonitorDelegate, OS_xpc_object;

@interface NRDeviceMonitor : NSObject

@property (retain, nonatomic) NRDeviceIdentifier *internalDeviceIdentifier;
@property (nonatomic) BOOL didIssueFirstUpdate;
@property (nonatomic) BOOL internalIsRegistered;
@property (nonatomic) BOOL internalIsEnabled;
@property (nonatomic) BOOL internalIsNearby;
@property (nonatomic) BOOL internalIsConnected;
@property (nonatomic) BOOL internalIsCloudConnected;
@property (nonatomic) BOOL internalIsAsleep;
@property (nonatomic) BOOL internalIsClassCConnected;
@property (nonatomic) unsigned char internalLinkType;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (weak, nonatomic) id<NRDeviceMonitorDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_xpc_object> *connection;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
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
- (BOOL)start;
- (id)initWithDeviceIdentifier:(id)a0 delegate:(id)a1 queue:(id)a2;
- (void)updateStateFromResponse:(id)a0;
- (void)checkInWithRetryCount:(unsigned int)a0;

@end
