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

- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (id).cxx_construct;
- (void)didFailWithError:(id)a0;
- (void)_updateState:(unsigned long long)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)deamonConnectionInterrupted;
- (void)deamonConnectionInvalidated;
- (void)didReceiveNewSolutions:(id)a0;
- (void)rangingRequestDidUpdateStatus:(unsigned long long)a0;
- (void)rangingServiceDidUpdateState:(unsigned long long)a0 cause:(long long)a1;
- (void)startBeaconingWithOptions:(id)a0;
- (void)stopBeaconing;

@end
