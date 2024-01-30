@interface ICCoreDataCoreSpotlightDelegate : NSCoreDataCoreSpotlightDelegate

@property (nonatomic) BOOL isCheckingObjectConsistency;
@property (readonly, nonatomic) BOOL shouldPerformConsistencyCheck;
@property (nonatomic) unsigned long long indexingPriority;

- (id)indexName;
- (id)attributeSetForObject:(id)a0;
- (void)startSpotlightIndexing;
- (void)stopSpotlightIndexing;
- (id)bundleIdentifier;
- (void)dealloc;
- (id)initForStoreWithDescription:(id)a0 coordinator:(id)a1 indexingPriority:(unsigned long long)a2;
- (BOOL)shouldIndexableObjectExistInIndexing:(id)a0;

@end
