@class NSString;
@protocol NPKIDVRemoteDeviceServiceServerDelegate;

@interface NPKIDVRemoteDeviceServiceServer : PDXPCService <NPKIDVRemoteDeviceServiceServerProtocol>

@property (weak, nonatomic) id<NPKIDVRemoteDeviceServiceServerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithConnection:(id)a0 delegate:(id)a1;
- (void)didReceiveEvent:(unsigned long long)a0 fromRemoteDeviceWithID:(id)a1 ackHandler:(id /* block */)a2;
- (void).cxx_destruct;

@end
