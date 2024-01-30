@class NSArray, TRIClient;

@interface CDMTRIClientManager : NSObject

@property (readonly, nonatomic) TRIClient *trialClient;
@property (readonly, nonatomic) int trialProjectId;
@property (readonly, nonatomic) NSArray *trialNamespaceNames;

- (id)description;
- (void).cxx_destruct;
- (id)initForProjectId:(int)a0 withNamespaceNames:(id)a1;
- (void)initTRIClient;
- (void)refreshTRIClientInternalCache;
- (void)registerAssetsRefreshHandler;

@end
