@interface ICCoreDataCoreSpotlightDelegate : NSCoreDataCoreSpotlightDelegate

@property (nonatomic) BOOL isCheckingObjectConsistency;
@property (readonly, nonatomic) BOOL shouldPerformConsistencyCheck;
@property (nonatomic) unsigned long long indexingPriority;

- (id)initForStoreWithDescription:(id)a0 coordinator:(id)a1 indexingPriority:(unsigned long long)a2;
- (void)dealloc;
- (id)indexName;
- (BOOL)shouldIndexableObjectExistInIndexing:(id)a0;
- (id)bundleIdentifier;
- (id)attributeSetForObject:(id)a0;
- (void)startSpotlightIndexing;
- (void)stopSpotlightIndexing;

@end
