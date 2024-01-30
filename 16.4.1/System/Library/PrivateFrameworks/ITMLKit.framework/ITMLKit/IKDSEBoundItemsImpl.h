@class NSString, NSArray, IKChangeSet, NSMutableDictionary, NSDictionary, _IKDSEPrototypeBundle, IKDataSourceElement, IKAppDataSet, NSMutableIndexSet;

@interface IKDSEBoundItemsImpl : NSObject <IKDataSourceElementImplementing> {
    BOOL _visibleIndexRangeIsDirty;
}

@property (retain, nonatomic) IKChangeSet *itemsChangeSet;
@property (retain, nonatomic) IKAppDataSet *dataSet;
@property (copy, nonatomic) NSDictionary *usedPrototypeMappingsByIdentifier;
@property (retain, nonatomic) _IKDSEPrototypeBundle *prototypeBundle;
@property (copy, nonatomic) NSDictionary *childrenByItemID;
@property (retain, nonatomic) NSMutableIndexSet *visibleIndexSet;
@property (retain, nonatomic) NSMutableDictionary *proxiedItemElementsByItemID;
@property (readonly, weak, nonatomic) IKDataSourceElement *dataSourceElement;
@property (readonly, nonatomic) NSArray *prototypes;
@property (readonly, copy, nonatomic) NSDictionary *indexTitles;
@property (readonly, nonatomic) NSArray *masterPrototypes;
@property (readonly, copy, nonatomic) NSArray *proxiedItemElements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_canProxiedItemElementsBeUpdatedWithLoadedElements;

- (long long)numberOfItems;
- (void)teardown;
- (void).cxx_destruct;
- (void)_appendVisibleIndexSetWithIndex:(long long)a0;
- (id)_elementForItemAtIndex:(long long)a0;
- (void)_initializePrototypeBundleIfNeeded;
- (id)_prototypeMappingForItemAtIndex:(long long)a0;
- (void)applyUpdatesWithImplementation:(id)a0 usingUpdater:(id /* block */)a1;
- (BOOL)canProxyUnloadedChildElement:(id)a0;
- (void)configureUpdatesWithImplementation:(id)a0;
- (id)elementForItemAtIndex:(long long)a0;
- (long long)indexOfItemForElement:(id)a0;
- (id)initWithDataSourceElement:(id)a0;
- (void)initializeWithElementFactory:(id)a0;
- (void)loadIndex:(long long)a0;
- (id)masterPrototypeForItemAtIndex:(unsigned long long)a0;
- (id)prototypeForItemAtIndex:(long long)a0;
- (id)proxyElementForLoadedChildElement:(id)a0;
- (void)resetImplicitUpdates;
- (void)resetUpdates;
- (void)unloadIndex:(long long)a0;
- (void)updateStylesUsingUpdater:(id /* block */)a0;

@end
