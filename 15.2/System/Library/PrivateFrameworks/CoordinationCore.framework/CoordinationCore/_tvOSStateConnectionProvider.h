@class NSString, NSXPCConnection;
@protocol COServiceListenerProvider;

@interface _tvOSStateConnectionProvider : NSObject <COStateManagerConnectionProvider>

@property (readonly, nonatomic) id<COServiceListenerProvider> provider;
@property (readonly, nonatomic) NSXPCConnection *stateManagerServiceConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithListenerProvider:(id)a0;

@end
