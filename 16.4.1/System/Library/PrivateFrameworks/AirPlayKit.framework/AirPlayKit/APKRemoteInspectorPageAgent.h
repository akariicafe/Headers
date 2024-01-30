@class NSString;
@protocol APKRemoteInspectorPageEventDispatcherProtocol, APKRemoteInspectorPageAgentDelegate;

@interface APKRemoteInspectorPageAgent : NSObject <RWIProtocolPageDomainHandler>

@property (readonly, nonatomic) id<APKRemoteInspectorPageEventDispatcherProtocol> dispatcher;
@property (weak, nonatomic) id<APKRemoteInspectorPageAgentDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDispatcher:(id)a0;
- (void).cxx_destruct;
- (void)disableWithErrorCallback:(id /* block */)a0 successCallback:(id /* block */)a1;
- (void)enableWithErrorCallback:(id /* block */)a0 successCallback:(id /* block */)a1;
- (void)getResourceContentWithErrorCallback:(id /* block */)a0 successCallback:(id /* block */)a1 frameId:(id)a2 url:(id)a3;
- (void)getResourceTreeWithErrorCallback:(id /* block */)a0 successCallback:(id /* block */)a1;

@end
