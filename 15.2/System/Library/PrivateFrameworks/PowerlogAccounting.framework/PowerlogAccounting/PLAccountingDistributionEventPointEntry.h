@interface PLAccountingDistributionEventPointEntry : PLAccountingDistributionEventEntry

+ (id)entryKey;
+ (int)classDirectionality;
+ (void)load;

- (id)initWithDistributionID:(id)a0 withChildNodeNameToWeight:(id)a1 withStartDate:(id)a2;

@end
