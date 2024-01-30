@class NSArray, NSUUID, UPResultRootNode;

@interface UPResult : NSObject

@property (readonly, copy, nonatomic) NSArray *_candidates;
@property (readonly, copy) NSUUID *queryUUID;
@property (readonly, copy) UPResultRootNode *rootNode;

+ (id)createResultFromExistingResult:(id)a0 truncatedTo:(unsigned long long)a1;

- (void).cxx_destruct;
- (long long)candidateCount;
- (id)candidateAtRank:(long long)a0;
- (id)initWithCandidates:(id)a0 queryUUID:(id)a1;

@end
