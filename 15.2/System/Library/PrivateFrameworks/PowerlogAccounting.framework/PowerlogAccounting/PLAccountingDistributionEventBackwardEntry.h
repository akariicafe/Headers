@interface PLAccountingDistributionEventBackwardEntry : PLAccountingDistributionEventEntry

+ (id)entryKey;
+ (int)classDirectionality;
+ (void)load;

- (id)initWithDistributionID:(id)a0 withChildNodeNameToWeight:(id)a1 withEndDate:(id)a2;

@end
