@class NSSet, NSMutableDictionary, NSArray;

@interface FPSpotlightCollectorManager : NSObject <FPSpotlightCollectorDelegate>

@property (retain) id providerDomainChangesToken;
@property (retain) NSSet *currentMountPoints;
@property (readonly) NSSet *effectiveCurrentMountPoints;
@property (retain) NSMutableDictionary *collectorByDescriptor;
@property BOOL areMountQueriesEnabled;
@property (readonly, nonatomic) NSArray *collectors;

+ (id)sharedInstance;
+ (id)_mountPointsFromProviderDomains:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_observeFileProviderDomains;
- (void)suspendCollectors;
- (void)resumeCollectors;
- (void)enableMountPointQueries;
- (void)disableMountPointQueries;
- (id)_recursiveDescription;
- (void)collectorDidFinish:(id)a0;
- (id)mountPointsForCollector:(id)a0;
- (void)registerDataSource:(id)a0;
- (void)unregisterDataSource:(id)a0;

@end
