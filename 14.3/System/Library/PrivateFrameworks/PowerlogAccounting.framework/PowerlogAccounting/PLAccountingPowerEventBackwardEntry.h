@interface PLAccountingPowerEventBackwardEntry : PLAccountingPowerEventEntry

+ (int)classDirectionality;
+ (void)load;
+ (id)entryKey;

- (id)initWithRootNodeID:(id)a0 withPower:(double)a1 withEndDate:(id)a2;

@end
