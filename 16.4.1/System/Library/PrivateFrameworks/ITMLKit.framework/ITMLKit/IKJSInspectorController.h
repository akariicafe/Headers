@class IKJSInspectorNetworkAgent, IKJSInspectorPageAgent, IKDOMDocument, NSDate, NSString, IKAppContext, IKJSInspectorStorageAgent, RWIProtocolInspector, IKJSInspectorCSSAgent, IKJSInspectorDOMAgent;
@protocol IKJSInspectorControllerDelegate, IKNetworkRequestLoader;

@interface IKJSInspectorController : NSObject <IKJSInspectorControllerDelegate> {
    struct { BOOL respondsToInspectElementModeChanged; BOOL respondsToHighlightViewForElementWithOneID; BOOL respondsToHighlightViewForElementWithManyIDs; BOOL respondsToCancelHighlightView; } _delegateFlags;
    struct { BOOL respondsToActiveDocument; } _appFlags;
}

@property (weak, nonatomic) IKDOMDocument *activeDocument;
@property (readonly, weak, nonatomic) IKJSInspectorDOMAgent *domAgent;
@property (readonly, weak, nonatomic) IKJSInspectorNetworkAgent *networkAgent;
@property (readonly, weak, nonatomic) IKJSInspectorPageAgent *pageAgent;
@property (readonly, weak, nonatomic) IKJSInspectorCSSAgent *cssAgent;
@property (readonly, weak, nonatomic) IKJSInspectorStorageAgent *storageAgent;
@property (readonly, nonatomic) id inspectorConnectedToken;
@property (readonly, nonatomic) id inspectorDisconnectedToken;
@property (readonly, weak) IKAppContext *appContext;
@property (weak, nonatomic) id<IKJSInspectorControllerDelegate> delegate;
@property (readonly, nonatomic) RWIProtocolInspector *inspector;
@property (readonly, nonatomic) NSDate *inspectorConnectDate;
@property (readonly, nonatomic) id<IKNetworkRequestLoader> requestLoader;
@property (readonly, nonatomic, getter=isInspectElementModeEnabled) BOOL inspectElementModeEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)evaluateMediaQuery:(id /* block */)a0;
- (id)initWithAppContext:(id)a0;
- (void)unregisterLoaderWithIdentifier:(id)a0;
- (void)_updateCurrentActiveDocument;
- (void)appDocumentDidAppear:(id)a0;
- (void)appDocumentDidDisappear:(id)a0;
- (void)appDocumentDidLoad:(id)a0;
- (void)appDocumentDidUnload:(id)a0;
- (void)appDocumentDidUpdate:(id)a0;
- (BOOL)cancelHighlightView;
- (void)didAddEventListenerForDOMNode:(id)a0;
- (BOOL)highlightViewForElementWithID:(long long)a0 contentColor:(id)a1 paddingColor:(id)a2 borderColor:(id)a3 marginColor:(id)a4;
- (BOOL)highlightViewsForElementsWithIDs:(id)a0 contentColor:(id)a1 paddingColor:(id)a2 borderColor:(id)a3 marginColor:(id)a4;
- (void)inspectElementModeChanged:(BOOL)a0;
- (void)inspectNodeWithID:(long long)a0;
- (id)nodeById:(long long)a0;
- (id)nodesByIds:(id)a0;
- (id)registerLoaderWithIdentifier:(id)a0;
- (void)resetStylesFromNode:(id)a0;
- (id)styleFromComposer:(id)a0;
- (void)updateStylesheets;
- (void)willRemoveEventListenerForDOMNode:(id)a0;

@end
