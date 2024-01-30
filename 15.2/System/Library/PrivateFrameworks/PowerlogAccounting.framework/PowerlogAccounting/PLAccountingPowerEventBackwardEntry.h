@interface PLAccountingPowerEventBackwardEntry : PLAccountingPowerEventEntry

+ (id)entryKey;
+ (int)classDirectionality;
+ (void)load;

- (id)initWithRootNodeID:(id)a0 withPower:(double)a1 withEndDate:(id)a2;

@end
