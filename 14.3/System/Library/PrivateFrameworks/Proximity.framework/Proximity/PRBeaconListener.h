@class NSString, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue, PRBeaconListenerDelegate;

@interface PRBeaconListener : PRRangingDevice <PRRangingClientProtocol> {
    struct DaemonBackedService { NSXPCConnection *_connection; } _service;
}

@property (weak, nonatomic) id<PRBeaconListenerDelegate> delegate;
@property (readonly) unsigned long long state;
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
- (void)clearBeaconWhitelistWithCompletionHandler:(id /* block */)a0;
- (void)pushBeaconWhitelist:(id)a0 completionHandler:(id /* block */)a1;
- (void)rangingServiceDidUpdateState:(unsigned long long)a0 cause:(long long)a1;
- (void)didReceiveNewSolutions:(id)a0;
- (void)rangingRequestDidUpdateStatus:(unsigned long long)a0;
- (void)deamonConnectionInvalidated;
- (void)deamonConnectionInterrupted;

@end
