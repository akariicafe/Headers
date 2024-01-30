@class NSArray;

@interface HKMedicationsResolverResult : NSObject

@property (nonatomic) BOOL looksGeneric;
@property (copy, nonatomic) NSArray *resolvedIds;
@property (copy, nonatomic) NSArray *ngramList;
@property (nonatomic) long long numberOfNewNgrams;
@property (nonatomic) long long numberOfUsedNgrams;
@property (copy, nonatomic) NSArray *usedNgrams;

- (id)description;
- (void).cxx_destruct;

@end
