@class NSString, PFUbiquityLocation, PFUbiquityKnowledgeVector;

@interface PFUbiquityBaselineHeuristics : NSObject

@property (readonly, nonatomic) NSString *localPeerID;
@property (readonly, nonatomic) NSString *storeName;
@property (readonly, nonatomic) PFUbiquityLocation *ubiquityRootLocation;
@property (readonly, nonatomic) NSString *modelVersionHash;
@property (nonatomic) long long numRequiredTransactions;
@property (readonly, nonatomic) long long storeSize;
@property (readonly, nonatomic) long long logSize;
@property (nonatomic) long double logToStoreSizeRatio;
@property (nonatomic) long long minLogBytes;
@property (retain, nonatomic) PFUbiquityKnowledgeVector *currentBaselineKV;
@property (retain, nonatomic) PFUbiquityKnowledgeVector *currentKV;

- (id)init;
- (id)initWithLocalPeerID:(id)a0 storeName:(id)a1 modelVersionHash:(id)a2 andUbiquityRootLocation:(id)a3;
- (void)setLogSize:(long long)a0;
- (long long)bytesForFileAtPath:(id)a0;
- (BOOL)haveEnoughTransactionsToRoll;
- (void)updateHeuristics;
- (BOOL)logsConsumeEnoughDiskSpace;
- (BOOL)canRollBaseline:(id *)a0;
- (void)setStoreSize:(long long)a0;
- (void)dealloc;
- (id)copy;
- (id)description;

@end
