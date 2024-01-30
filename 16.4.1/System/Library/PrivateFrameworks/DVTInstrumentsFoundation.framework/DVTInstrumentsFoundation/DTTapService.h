@class DTTapServiceMessageSender, NSString, DTTapConfig, DTTapLocal, NSObject;
@protocol DTTapServiceDelegate, OS_dispatch_queue;

@interface DTTapService : DTXService <DTTapAuthorizedAPI, DTTapBulkDataReceiver> {
    id<DTTapServiceDelegate> _delegate;
    DTTapConfig *_config;
    DTTapLocal *_tap;
    BOOL _tapIsRunning;
    unsigned int _tapServiceID;
    NSObject<OS_dispatch_queue> *_serialQueue;
    DTTapServiceMessageSender *_messageSender;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerCapabilities:(id)a0 forDelegateClass:(Class)a1 forConnection:(id)a2;

- (void)setConfig:(id)a0;
- (void)pause;
- (void)stop;
- (void)start;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;
- (id)initWithChannel:(id)a0;
- (void)unpause;
- (void)handleBulkData:(const void *)a0 size:(unsigned long long)a1 destructor:(id /* block */)a2;
- (void)handleBulkData:(id)a0;
- (void)fetchDataNow;
- (void)sendFrameMessage:(id)a0;
- (void)sendHeartbeatTime:(unsigned long long)a0;

@end
