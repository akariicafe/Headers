@class NSString, NSXPCConnection, NSObject;
@protocol PRBeaconDelegate, OS_dispatch_queue;

@interface PRBeacon : PRRangingDevice <PRRangingClientProtocol> {
    struct DaemonBackedService { NSXPCConnection *_connection; } _service;
}

@property (readonly) unsigned long long state;
@property (weak, nonatomic) id<PRBeaconDelegate> delegate;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void)_updateState:(unsigned long long)a0;
- (void)dealloc;
- (void)didFailWithError:(id)a0;
- (id).cxx_construct;
- (void)rangingServiceDidUpdateState:(unsigned long long)a0 cause:(long long)a1;
- (void)didReceiveNewSolutions:(id)a0;
- (void)rangingRequestDidUpdateStatus:(unsigned long long)a0;
- (void)startBeaconingWithOptions:(id)a0;
- (void)stopBeaconing;
- (void)deamonConnectionInvalidated;
- (void)deamonConnectionInterrupted;

@end
