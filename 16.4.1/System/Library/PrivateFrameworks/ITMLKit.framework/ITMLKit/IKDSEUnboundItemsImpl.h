@class NSArray, IKChangeSet, NSDictionary, IKDataSourceElement, NSString;

@interface IKDSEUnboundItemsImpl : NSObject <IKDataSourceElementImplementing>

@property (copy, nonatomic) NSArray *itemElements;
@property (retain, nonatomic) IKChangeSet *itemsChangeSet;
@property (readonly, weak, nonatomic) IKDataSourceElement *dataSourceElement;
@property (readonly, nonatomic) NSArray *prototypes;
@property (readonly, copy, nonatomic) NSDictionary *indexTitles;
@property (readonly, nonatomic) NSArray *masterPrototypes;
@property (readonly, copy, nonatomic) NSArray *proxiedItemElements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfItems;
- (void)teardown;
- (void).cxx_destruct;
- (void)applyUpdatesWithImplementation:(id)a0 usingUpdater:(id /* block */)a1;
- (void)configureUpdatesWithImplementation:(id)a0;
- (id)elementForItemAtIndex:(long long)a0;
- (long long)indexOfItemForElement:(id)a0;
- (id)initWithDataSourceElement:(id)a0;
- (void)initializeWithElementFactory:(id)a0;
- (void)loadIndex:(long long)a0;
- (id)prototypeForItemAtIndex:(long long)a0;
- (void)resetUpdates;
- (void)unloadIndex:(long long)a0;
- (void)updateStylesUsingUpdater:(id /* block */)a0;

@end
