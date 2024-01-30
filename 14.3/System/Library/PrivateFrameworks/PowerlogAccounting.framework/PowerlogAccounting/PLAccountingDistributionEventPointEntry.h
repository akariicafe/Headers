@interface PLAccountingDistributionEventPointEntry : PLAccountingDistributionEventEntry

+ (int)classDirectionality;
+ (void)load;
+ (id)entryKey;

- (id)initWithDistributionID:(id)a0 withChildNodeNameToWeight:(id)a1 withStartDate:(id)a2;

@end
