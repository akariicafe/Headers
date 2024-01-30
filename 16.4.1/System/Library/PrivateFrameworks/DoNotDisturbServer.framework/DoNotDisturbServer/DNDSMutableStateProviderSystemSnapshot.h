@class NSArray, NSDictionary, NSDate;

@interface DNDSMutableStateProviderSystemSnapshot : DNDSStateProviderSystemSnapshot

@property (copy, nonatomic) NSArray *assertions;
@property (copy, nonatomic) NSArray *activeAssertionUUIDs;
@property (copy, nonatomic) NSDictionary *activeDateIntervalByAssertionUUID;
@property (nonatomic) unsigned long long interruptionBehaviorSetting;
@property (nonatomic) unsigned long long lostModeState;
@property (copy, nonatomic) NSDate *lastUpdate;

- (void)setLastUpdate:(id)a0;
- (void)setAssertions:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setActiveAssertionUUIDs:(id)a0;
- (void)setInterruptionBehaviorSetting:(unsigned long long)a0;
- (void)setActiveDateIntervalByAssertionUUID:(id)a0;
- (void)setLostModeState:(unsigned long long)a0;

@end
