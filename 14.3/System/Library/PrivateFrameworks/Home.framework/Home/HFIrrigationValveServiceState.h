@interface HFIrrigationValveServiceState : HFServiceState

@property (readonly, nonatomic) unsigned long long type;

+ (id)requiredCharacteristicTypes;
+ (id)stateClassIdentifier;
+ (unsigned long long)_typeForSystemActiveState:(BOOL)a0 usageState:(long long)a1;

- (long long)priority;
- (long long)primaryState;
- (BOOL)isTransitioning;
- (id)initWithBatchReadResponse:(id)a0;
- (id)stateTypeIdentifier;

@end
