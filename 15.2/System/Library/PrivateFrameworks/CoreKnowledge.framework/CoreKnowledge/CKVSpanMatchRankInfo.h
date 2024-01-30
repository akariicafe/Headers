@class CKVPriorInfo, CKVItemInfo, CKVSpanMatch;

@interface CKVSpanMatchRankInfo : NSObject

@property (readonly, nonatomic) CKVSpanMatch *spanMatch;
@property (readonly, nonatomic) CKVItemInfo *itemInfo;
@property (readonly, nonatomic) CKVPriorInfo *priorInfo;
@property (readonly, nonatomic) float rankScore;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (id)initWithCandidate:(id)a0 priorInfo:(id)a1 rankScore:(float)a2;
- (BOOL)isEqualToSpanMatchRankInfo:(id)a0;

@end
