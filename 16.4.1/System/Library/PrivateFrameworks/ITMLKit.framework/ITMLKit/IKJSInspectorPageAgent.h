@class NSString, IKJSInspectorController, RWIProtocolPageFrameResourceTree;

@interface IKJSInspectorPageAgent : NSObject <RWIProtocolPageDomainHandler>

@property (readonly, nonatomic) RWIProtocolPageFrameResourceTree *resourceTree;
@property (retain, nonatomic) NSString *currentFrameIdentifier;
@property (readonly, weak, nonatomic) IKJSInspectorController *controller;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_dispatchEventWithBlock:(id /* block */)a0;
- (void)disableWithErrorCallback:(id /* block */)a0 successCallback:(id /* block */)a1;
- (void)documentDidChange;
- (void)enableWithErrorCallback:(id /* block */)a0 successCallback:(id /* block */)a1;
- (void)getResourceContentWithErrorCallback:(id /* block */)a0 successCallback:(id /* block */)a1 frameId:(id)a2 url:(id)a3;
- (void)getResourceTreeWithErrorCallback:(id /* block */)a0 successCallback:(id /* block */)a1;
- (id)initWithInspectorController:(id)a0;
- (void)reloadWithErrorCallback:(id /* block */)a0 successCallback:(id /* block */)a1 ignoreCache:(BOOL *)a2 revalidateAllResources:(BOOL *)a3;

@end
