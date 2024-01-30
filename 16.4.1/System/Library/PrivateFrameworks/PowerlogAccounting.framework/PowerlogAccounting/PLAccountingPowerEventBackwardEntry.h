@interface PLAccountingPowerEventBackwardEntry : PLAccountingPowerEventEntry

+ (id)entryKey;
+ (void)load;
+ (int)classDirectionality;

- (id)initWithRootNodeID:(id)a0 withPower:(double)a1 withEndDate:(id)a2;

@end
