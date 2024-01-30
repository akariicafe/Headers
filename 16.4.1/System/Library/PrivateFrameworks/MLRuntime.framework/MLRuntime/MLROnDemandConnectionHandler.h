@class NSString, NSXPCConnection;
@protocol MLROnDemandTaskPerforming;

@interface MLROnDemandConnectionHandler : NSObject <_EXMainConnectionHandler, MLROnDemandRemoteProtocol>

@property (weak, nonatomic) NSXPCConnection *xpcConnection;
@property (retain, nonatomic) id<MLROnDemandTaskPerforming> pluginPrincipal;
@property (readonly) id principalObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldAcceptXPCConnection:(id)a0;
- (id)initWithPrincipalObject:(id)a0;
- (id)principalObject;
- (void).cxx_destruct;
- (void)performTask:(id)a0 completionHandler:(id /* block */)a1;
- (void)performTaskInternal:(id)a0 completionHandler:(id /* block */)a1;

@end
