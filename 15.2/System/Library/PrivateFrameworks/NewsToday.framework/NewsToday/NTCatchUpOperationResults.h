@class NSArray, SFRankingFeedback, NSObject;

@interface NTCatchUpOperationResults : NSObject <NSCopying>

@property (readonly, nonatomic) NSObject *supplementalInterestToken;
@property (readonly, copy, nonatomic) NSArray *items;
@property (readonly, copy, nonatomic) SFRankingFeedback *rankingFeedback;

- (id)copyWithItems:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithItems:(id)a0 rankingFeedback:(id)a1 supplementalInterestToken:(id)a2;
- (id)initWithHeadlines:(id)a0 rankingFeedback:(id)a1 actionURLsByArticleID:(id)a2;
- (id)initWithFeedItems:(id)a0 supplementalInterestToken:(id)a1;
- (id)resultsByCombiningWithResults:(id)a0;

@end
