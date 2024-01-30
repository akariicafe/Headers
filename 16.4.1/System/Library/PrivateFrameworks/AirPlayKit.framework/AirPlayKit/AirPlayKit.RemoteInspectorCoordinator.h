@class APKRemoteInspectorDOMAgent, NSArray, NSString, APKRemoteInspectorPageAgent, NSError, APKRemoteInspectorCSSAgent;
@protocol APKRemoteInspectorStyleProtocol, APKRemoteInspectorNodeProtocol;

@interface AirPlayKit.RemoteInspectorCoordinator : _TtCs12_SwiftObject <APKRemoteInspectorCSSAgentDelegate, APKRemoteInspectorPageAgentDelegate, APKRemoteInspectorDOMAgentDelegate, APKRemoteInspectorNetworkAgentDelegate> {
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ registry;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ onResourcesRequest;
    void /* unknown type, empty encoding */ onResourceContentRequest;
}

- (void)CSSAgent:(APKRemoteInspectorCSSAgent *)a0 onInlineStylesRequestWithIdentifier:(int)a1 completion:(void (^)(id<APKRemoteInspectorStyleProtocol>, NSError *))a2;
- (void)DOMAgent:(APKRemoteInspectorDOMAgent *)a0 onAttributesRequestWithIdentifier:(int)a1 completion:(void (^)(NSArray *, NSError *))a2;
- (void)DOMAgent:(APKRemoteInspectorDOMAgent *)a0 onDocumentWithCompletion:(void (^)(id<APKRemoteInspectorNodeProtocol>, NSError *))a1;
- (void)CSSAgent:(APKRemoteInspectorCSSAgent *)a0 onComputedStylesRequestWithIdentifier:(int)a1 completion:(void (^)(NSArray *, NSError *))a2;
- (void)DOMAgent:(APKRemoteInspectorDOMAgent *)a0 onChildNodeRequestWithParentIdentifier:(int)a1 depth:(int)a2 completion:(void (^)(NSArray *, NSError *))a3;
- (void)DOMAgent:(APKRemoteInspectorDOMAgent *)a0 onOuterHTMLRequestWithIdentifier:(int)a1 completion:(void (^)(NSString *, NSError *))a2;
- (void)pageAgent:(APKRemoteInspectorPageAgent *)a0 onResourceContentRequestWithIdentifier:(NSString *)a1 completion:(void (^)(NSString *, BOOL, NSError *))a2;
- (void)pageAgent:(APKRemoteInspectorPageAgent *)a0 onResourcesRequestWithCompletion:(void (^)(NSArray *, NSError *))a1;

@end
