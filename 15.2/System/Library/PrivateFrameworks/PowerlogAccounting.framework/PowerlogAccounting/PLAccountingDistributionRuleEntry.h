@class NSNumber;

@interface PLAccountingDistributionRuleEntry : PLAccountingRuleEntry

@property (readonly, nonatomic) NSNumber *nodeID;
@property (readonly, nonatomic) NSNumber *rootNodeID;
@property (readonly, nonatomic) NSNumber *distributionID;

+ (id)entryKey;
+ (void)load;

- (id)description;
- (id)initWithNodeID:(id)a0 withRootNodeID:(id)a1 withDistributionID:(id)a2 withEntryDate:(id)a3;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
