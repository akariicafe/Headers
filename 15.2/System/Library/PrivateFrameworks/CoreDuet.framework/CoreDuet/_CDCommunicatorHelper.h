@interface _CDCommunicatorHelper : NSObject

+ (id)sharedInstance;

- (id)getNewThermalValueForOldValue:(id)a0;
- (id)getOldThermalValueForNewValue:(id)a0;
- (unsigned long long)highestCommonVersionFor:(id)a0 and:(id)a1;

@end
