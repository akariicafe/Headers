@class NSDictionary, NSMutableSet, PFLNetworkResourceManager;
@protocol PFLForegroundSessionDelegate, PFLDataSource;

@interface PFLForegroundSession : NSObject <PFLTaskDelegate, PFLResumable>

@property (readonly, nonatomic) NSDictionary *identifierTodataSource;
@property (readonly, nonatomic) PFLNetworkResourceManager *resourceManager;
@property (readonly, nonatomic) NSMutableSet *runningTasks;
@property (readonly, nonatomic) id<PFLDataSource> dataSource;
@property (readonly, nonatomic) BOOL ignoreEligibilityCheck;
@property (weak) id<PFLForegroundSessionDelegate> delegate;

- (void)_finish;
- (void)suspend;
- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;
- (void)resume;
- (id)initWithDataSource:(id)a0 networkResourceManager:(id)a1 ignoreEligibilityCheck:(BOOL)a2;
- (id)initWithNetworkResourceManager:(id)a0 dataSource:(id)a1;
- (BOOL)isEligibleWithEligibilityIdentifier:(id)a0 eligibilityProbability:(id)a1;
- (void)removeUnusedResourcesWithConfiguration:(id)a0;
- (void)task:(id)a0 didProgressToState:(unsigned long long)a1 withError:(id)a2;

@end
