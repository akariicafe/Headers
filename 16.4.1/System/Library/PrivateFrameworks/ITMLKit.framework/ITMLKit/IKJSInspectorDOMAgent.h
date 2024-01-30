@class IKJSInspectorController, NSString, NSMutableDictionary, NSMapTable, RWIProtocolDOMNode;

@interface IKJSInspectorDOMAgent : NSObject <RWIProtocolDOMDomainHandler> {
    NSMutableDictionary *_searches;
    RWIProtocolDOMNode *_rootNode;
    NSMapTable *_eventListenersMap;
    int _eventListenerIdSequence;
}

@property (readonly, weak, nonatomic) IKJSInspectorController *controller;
@property (readonly, nonatomic, getter=isInspectElementModeEnabled) BOOL inspectElementModeEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_nodeIDsFromNodePaths:(id)a0;
+ (id)_parseAttributeString:(id)a0;

- (void).cxx_destruct;
- (BOOL)hideHighlight;
- (void)discardSearchResultsWithErrorCallback:(id /* block */)a0 successCallback:(id /* block */)a1 searchId:(id)a2;
- (void)getDataBindingsForNodeWithErrorCallback:(id /* block */)a0 successCallback:(id /* block */)a1 nodeId:(int)a2;
- (void)setOuterHTMLWithErrorCallback:(id /* block */)a0 successCallback:(id /* block */)a1 nodeId:(int)a2 outerHTML:(id)a3;
- (int)_eventListenerIDForListener:(id)a0;
- (void)_fullfillNodePath:(id)a0;
- (void)didAddEventListenerForNodeID:(int)a0;
- (void)documentDidChange;
- (void)documentDidUpdate;
- (void)getAccessibilityPropertiesForNodeWithErrorCallback:(id /* block */)a0 successCallback:(id /* block */)a1 nodeId:(int)a2;
- (void)getAssociatedDataForNodeWithErrorCallback:(id /* block */)a0 successCallback:(id /* block */)a1 nodeId:(int)a2;
- (void)getAttributesWithErrorCallback:(id /* block */)a0 successCallback:(id /* block */)a1 nodeId:(int)a2;
- (void)getDocumentWithErrorCallback:(id /* block */)a0 successCallback:(id /* block */)a1;
- (void)getEventListenersForNodeWithErrorCallback:(id /* block */)a0 successCallback:(id /* block */)a1 nodeId:(int)a2;
- (void)getEventListenersForNodeWithErrorCallback:(id /* block */)a0 successCallback:(id /* block */)a1 nodeId:(int)a2 objectGroup:(id *)a3;
- (void)getOuterHTMLWithErrorCallback:(id /* block */)a0 successCallback:(id /* block */)a1 nodeId:(int)a2;
- (void)getSearchResultsWithErrorCallback:(id /* block */)a0 successCallback:(id /* block */)a1 searchId:(id)a2 fromIndex:(int)a3 toIndex:(int)a4;
- (void)getSupportedEventNamesWithErrorCallback:(id /* block */)a0 successCallback:(id /* block */)a1;
- (void)hideHighlightWithErrorCallback:(id /* block */)a0 successCallback:(id /* block */)a1;
- (void)highlightNodeListWithErrorCallback:(id /* block */)a0 successCallback:(id /* block */)a1 nodeIds:(id)a2 highlightConfig:(id)a3;
- (void)highlightNodeWithErrorCallback:(id /* block */)a0 successCallback:(id /* block */)a1 highlightConfig:(id)a2 nodeId:(int *)a3 objectId:(id *)a4;
- (id)initWithInspectorController:(id)a0;
- (void)inspectNodeWithID:(long long)a0;
- (void)moveToWithErrorCallback:(id /* block */)a0 successCallback:(id /* block */)a1 nodeId:(int)a2 targetNodeId:(int)a3 insertBeforeNodeId:(int *)a4;
- (void)performSearchWithErrorCallback:(id /* block */)a0 successCallback:(id /* block */)a1 query:(id)a2 nodeIds:(id *)a3;
- (void)performSearchWithErrorCallback:(id /* block */)a0 successCallback:(id /* block */)a1 query:(id)a2 nodeIds:(id *)a3 caseSensitive:(BOOL *)a4;
- (void)removeAttributeWithErrorCallback:(id /* block */)a0 successCallback:(id /* block */)a1 nodeId:(int)a2 name:(id)a3;
- (void)removeNodeWithErrorCallback:(id /* block */)a0 successCallback:(id /* block */)a1 nodeId:(int)a2;
- (void)requestChildNodesWithErrorCallback:(id /* block */)a0 successCallback:(id /* block */)a1 nodeId:(int)a2 depth:(int *)a3;
- (void)setAttributeValueWithErrorCallback:(id /* block */)a0 successCallback:(id /* block */)a1 nodeId:(int)a2 name:(id)a3 value:(id)a4;
- (void)setAttributesAsTextWithErrorCallback:(id /* block */)a0 successCallback:(id /* block */)a1 nodeId:(int)a2 text:(id)a3 name:(id *)a4;
- (void)setEventListenerDisabledWithErrorCallback:(id /* block */)a0 successCallback:(id /* block */)a1 eventListenerId:(int)a2 disabled:(BOOL)a3;
- (void)setInspectModeEnabledWithErrorCallback:(id /* block */)a0 successCallback:(id /* block */)a1 enabled:(BOOL)a2 highlightConfig:(id *)a3;
- (void)setInspectModeEnabledWithErrorCallback:(id /* block */)a0 successCallback:(id /* block */)a1 enabled:(BOOL)a2 highlightConfig:(id *)a3 showRulers:(BOOL *)a4;
- (void)setNodeValueWithErrorCallback:(id /* block */)a0 successCallback:(id /* block */)a1 nodeId:(int)a2 value:(id)a3;
- (void)willRemoveEventListenerForNodeID:(int)a0;

@end
