@class NSArray;

@interface CRKRankPath : NSObject

@property (copy, nonatomic) NSArray *ranks;
@property (readonly, nonatomic) long long length;

- (id)init;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithRanks:(id)a0;
- (BOOL)isEqualToRankPath:(id)a0;
- (id)initWithRank:(long long)a0;
- (id)rankPathByAppendingRank:(long long)a0;

@end
