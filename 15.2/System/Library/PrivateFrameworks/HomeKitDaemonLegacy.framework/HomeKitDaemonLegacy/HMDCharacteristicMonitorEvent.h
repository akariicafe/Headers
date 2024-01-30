@interface HMDCharacteristicMonitorEvent : HMDCharacteristicEvent

+ (id)logCategory;

- (id)description;
- (BOOL)_evaluateNewValue:(id)a0;
- (BOOL)_compareEventValue:(id)a0;

@end
