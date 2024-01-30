@class NSString;
@protocol APKRemoteInspectorCSSAgentDelegate, APKRemoteInspectorCSSEventDispatcherProtocol;

@interface APKRemoteInspectorCSSAgent : NSObject <RWIProtocolCSSDomainHandler>

@property (readonly, nonatomic) id<APKRemoteInspectorCSSEventDispatcherProtocol> dispatcher;
@property (weak, nonatomic) id<APKRemoteInspectorCSSAgentDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDispatcher:(id)a0;
- (void).cxx_destruct;
- (void)getInlineStylesForNodeWithErrorCallback:(id /* block */)a0 successCallback:(id /* block */)a1 nodeId:(int)a2;
- (void)disableWithErrorCallback:(id /* block */)a0 successCallback:(id /* block */)a1;
- (void)enableWithErrorCallback:(id /* block */)a0 successCallback:(id /* block */)a1;
- (void)getComputedStyleForNodeWithErrorCallback:(id /* block */)a0 successCallback:(id /* block */)a1 nodeId:(int)a2;

@end
