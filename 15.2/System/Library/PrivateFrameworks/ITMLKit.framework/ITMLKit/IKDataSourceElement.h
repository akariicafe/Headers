@class NSArray, NSDictionary, IKChangeSet;
@protocol IKDataSourceElementImplementing;

@interface IKDataSourceElement : IKViewElement {
    BOOL _areItemsBound;
    struct { BOOL hasMasterPrototypes; BOOL hasProxiedItemElements; BOOL hasMasterPrototypeForItemAtIndex; BOOL hasResetImplicitUpdates; BOOL hasProxyElementForLoadedChildElement; BOOL hasCanProxyUnloadedChildElement; } _implFlags;
}

@property (copy, nonatomic) NSArray *autoHighlightedChildElements;
@property (nonatomic) long long autoHighlightIndex;
@property (copy, nonatomic) NSDictionary *indexTitles;
@property (readonly, nonatomic) id<IKDataSourceElementImplementing> impl;
@property (readonly, nonatomic) NSArray *masterPrototypes;
@property (readonly, copy, nonatomic) NSArray *proxiedItemElements;
@property (readonly, nonatomic, getter=areItemsBound) BOOL itemsBound;
@property (readonly, nonatomic) NSArray *prototypes;
@property (readonly, nonatomic) IKChangeSet *itemsChangeSet;

+ (unsigned long long)updateTypeForChangeInAttribute:(id)a0 fromValue:(id)a1 toValue:(id)a2;

- (long long)numberOfItems;
- (void).cxx_destruct;
- (void)dealloc;
- (id)debugDescription;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;
- (id)applyUpdatesWithElement:(id)a0;
- (void)configureUpdatesWithElement:(id)a0;
- (void)resetProperty:(unsigned long long)a0;
- (void)appDocumentDidMarkStylesDirty;
- (void)resetImplicitUpdates;
- (id)masterPrototypeForItemAtIndex:(unsigned long long)a0;
- (id)proxyElementForLoadedChildElement:(id)a0;
- (BOOL)canProxyUnloadedChildElement:(id)a0;
- (id)_parsedIndexTitlesFromString:(id)a0;
- (id)prototypeForItemAtIndex:(long long)a0;
- (id)elementForItemAtIndex:(long long)a0;
- (long long)indexOfItemForElement:(id)a0;
- (void)loadIndex:(long long)a0;
- (void)unloadIndex:(long long)a0;
- (void)resetUpdates;
- (id)firstItemElement;
- (id)lastItemElement;
- (void)enumerateItemElementsUsingBlock:(id /* block */)a0;

@end
