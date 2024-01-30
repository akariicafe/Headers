@interface PLAccountingPowerEventForwardEntry : PLAccountingPowerEventEntry

+ (id)entryKey;
+ (int)classDirectionality;
+ (void)load;

- (id)initWithRootNodeID:(id)a0 withPower:(double)a1 withStartDate:(id)a2;
- (BOOL)canMergeWithEvent:(id)a0;

@end
