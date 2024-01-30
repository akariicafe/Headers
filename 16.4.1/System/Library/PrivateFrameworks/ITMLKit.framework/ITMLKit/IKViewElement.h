@class IKViewElementStyle, NSString, IKAppDocument, IKDOMBindingController, NSMutableDictionary, NSDictionary, NSArray, NSMutableSet, IKChangeSet, IKViewElementStyleComposer, IKDataBinding;
@protocol IKStyleableElement;

@interface IKViewElement : NSObject <IKStyleableElement> {
    NSArray *_visibleChildren;
}

@property (weak, nonatomic) IKViewElement *parent;
@property (readonly, copy, nonatomic) NSString *classSelector;
@property (retain, nonatomic) NSDictionary *dataDictionary;
@property (copy, nonatomic) NSString *autoHighlightIdentifier;
@property (nonatomic) BOOL didUpdateAutoHighlightIdentifier;
@property (retain, nonatomic) NSMutableDictionary *metadataDict;
@property (retain, nonatomic) NSMutableSet *activeSingularEvents;
@property (weak, nonatomic) IKAppDocument *appDocument;
@property (readonly, retain, nonatomic) NSString *itmlID;
@property (readonly, nonatomic) IKDataBinding *binding;
@property (readonly, nonatomic) IKDOMBindingController *bindingController;
@property (readonly, nonatomic) BOOL areChildrenBound;
@property (readonly, nonatomic) BOOL prototypesUpdated;
@property (nonatomic) unsigned long long updateType;
@property (readonly, copy, nonatomic) NSArray *aliases;
@property (readonly, nonatomic) BOOL isPartOfPrototypeElement;
@property (readonly, nonatomic) BOOL isProxyElement;
@property (readonly, nonatomic) unsigned long long implicitUpdateType;
@property (readonly, copy, nonatomic) NSString *elementID;
@property (readonly, nonatomic) unsigned long long elementType;
@property (readonly, copy, nonatomic) NSString *elementName;
@property (readonly, retain, nonatomic) NSArray *children;
@property (readonly, retain, nonatomic) NSArray *unfilteredChildren;
@property (readonly, nonatomic, getter=isHidden) BOOL hidden;
@property (readonly, retain, nonatomic) NSDictionary *attributes;
@property (readonly, retain, nonatomic) IKViewElementStyle *style;
@property (readonly, copy, nonatomic) NSString *accessibilityText;
@property (nonatomic, getter=isDisabled) BOOL disabled;
@property (nonatomic, getter=isImpressionable) BOOL impressionable;
@property (readonly, nonatomic) NSDictionary *impressionableAttributes;
@property (readonly, nonatomic) IKChangeSet *unfilteredChildrenChangeSet;
@property (readonly, copy, nonatomic) NSArray *features;
@property (readonly, weak, nonatomic) id<IKStyleableElement> parentStyleableElement;
@property (retain, nonatomic) IKViewElementStyleComposer *styleComposer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportedFeatures;
+ (BOOL)shouldParseChildDOMElements;
+ (id)DOMEventTypeNameMap;
+ (id)_eventXMLNameMap;
+ (id)effectiveChildDOMElementsForDOMElement:(id)a0;
+ (unsigned long long)evaluateElementUpdateType:(id)a0;
+ (BOOL)shouldParseChildDOMElement:(id)a0;
+ (id)supportedFeaturesForElementName:(id)a0;
+ (unsigned long long)updateTypeForChangeInAttribute:(id)a0 fromValue:(id)a1 toValue:(id)a2;
+ (void)willParseDOMElement:(id)a0;

- (id)objectForKeyedSubscript:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)a0;
- (void)dispatchEvent:(id)a0 eventAttribute:(id)a1 canBubble:(BOOL)a2 isCancelable:(BOOL)a3 extraInfo:(id)a4 completionBlock:(id /* block */)a5;
- (void)dispatchEventOfType:(unsigned long long)a0 canBubble:(BOOL)a1 isCancelable:(BOOL)a2 extraInfo:(id)a3 completionBlock:(id /* block */)a4;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;
- (BOOL)_elevateToImplicitUpdateType:(unsigned long long)a0;
- (unsigned long long)_updateSubtreeWithElement:(id)a0;
- (void)adoptElement:(id)a0;
- (void)appDocumentDidMarkStylesDirty;
- (BOOL)canProxyUnloadedChildElement:(id)a0;
- (id)childElementWithType:(unsigned long long)a0;
- (id)childElementsWithType:(unsigned long long)a0;
- (id)childImageElementWithType:(unsigned long long)a0;
- (id)childTextElementWithStyle:(unsigned long long)a0;
- (void)configureUpdatesWithElement:(id)a0;
- (void)disperseUpdateType:(unsigned long long)a0;
- (id)initWithOriginalElement:(id)a0;
- (id)initWithPrototypeElement:(id)a0 parent:(id)a1 appDataItem:(id)a2;
- (void)performImplicitUpdates:(id /* block */)a0;
- (id)proxyElementForLoadedChildElement:(id)a0;
- (void)resetImplicitUpdates;
- (void)resetProperty:(unsigned long long)a0;
- (void)resetUpdates;
- (void)updateWithActualElement:(id)a0;

@end
