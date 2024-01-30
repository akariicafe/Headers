@interface PLAccountingDistributionEventIntervalEntry : PLAccountingDistributionEventEntry

+ (int)classDirectionality;
+ (void)load;
+ (id)entryKey;

- (id)initWithDistributionID:(id)a0 withChildNodeNameToWeight:(id)a1 withStartDate:(id)a2 withEndDate:(id)a3;
- (id)initWithDistributionID:(id)a0 withChildNodeIDToWeight:(id)a1 withStartDate:(id)a2 withEndDate:(id)a3;

@end
