@class NSNumber;

@interface PLAccountingDistributionRuleEntry : PLAccountingRuleEntry

@property (readonly, nonatomic) NSNumber *nodeID;
@property (readonly, nonatomic) NSNumber *rootNodeID;
@property (readonly, nonatomic) NSNumber *distributionID;

+ (void)load;
+ (id)entryKey;

- (id)initWithNodeID:(id)a0 withRootNodeID:(id)a1 withDistributionID:(id)a2 withEntryDate:(id)a3;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
