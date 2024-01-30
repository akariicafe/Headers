@interface PLAccountingPowerEventIntervalEntry : PLAccountingPowerEventEntry

+ (id)entryKey;
+ (int)classDirectionality;
+ (void)load;

- (BOOL)canMergeWithEvent:(id)a0;
- (id)initWithRootNodeID:(id)a0 withPower:(double)a1 withStartDate:(id)a2 withEndDate:(id)a3;

@end
