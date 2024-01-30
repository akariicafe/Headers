@class NSDictionary, NSMutableSet, PFLNetworkResourceManager;
@protocol PFLForegroundSessionDelegate, PFLDataSource;

@interface PFLForegroundSession : NSObject <PFLTaskDelegate, PFLResumable>

@property (readonly, nonatomic) NSDictionary *identifierTodataSource;
@property (readonly, nonatomic) PFLNetworkResourceManager *resourceManager;
@property (readonly, nonatomic) NSMutableSet *runningTasks;
@property (readonly, nonatomic) id<PFLDataSource> dataSource;
@property (readonly, nonatomic) BOOL ignoreEligibilityCheck;
@property (weak) id<PFLForegroundSessionDelegate> delegate;

- (id)initWithDataSource:(id)a0;
- (void)_finish;
- (void).cxx_destruct;
- (void)suspend;
- (void)resume;
- (void)task:(id)a0 didProgressToState:(unsigned long long)a1 withError:(id)a2;
- (id)initWithDataSource:(id)a0 networkResourceManager:(id)a1 ignoreEligibilityCheck:(BOOL)a2;
- (void)removeUnusedResourcesWithConfiguration:(id)a0;
- (BOOL)isEligibleWithEligibilityIdentifier:(id)a0 eligibilityProbability:(id)a1;
- (id)initWithNetworkResourceManager:(id)a0 dataSource:(id)a1;

@end
