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

- (void)dealloc;
- (id)_recursiveDescription;
- (id)init;
- (void).cxx_destruct;
- (void)registerDataSource:(id)a0;
- (void)unregisterDataSource:(id)a0;
- (void)_observeFileProviderDomains;
- (void)collectorDidFinish:(id)a0;
- (void)disableMountPointQueries;
- (void)enableMountPointQueries;
- (id)mountPointsForCollector:(id)a0;
- (void)resumeCollectors;
- (void)suspendCollectors;

@end
