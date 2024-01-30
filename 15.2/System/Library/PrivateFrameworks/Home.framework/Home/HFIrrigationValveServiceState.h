@interface HFIrrigationValveServiceState : HFServiceState

@property (readonly, nonatomic) unsigned long long type;

+ (id)requiredCharacteristicTypes;
+ (id)stateClassIdentifier;
+ (unsigned long long)_typeForSystemActiveState:(BOOL)a0 usageState:(long long)a1;

- (BOOL)isTransitioning;
- (long long)priority;
- (long long)primaryState;
- (id)initWithBatchReadResponse:(id)a0;
- (id)stateTypeIdentifier;

@end
