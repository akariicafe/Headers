@interface HFIrrigationSystemServiceState : HFServiceState

@property (readonly, nonatomic) unsigned long long type;

+ (id)requiredCharacteristicTypes;
+ (id)stateClassIdentifier;
+ (unsigned long long)_typeForActiveState:(BOOL)a0 usageState:(long long)a1 programMode:(long long)a2;

- (long long)priority;
- (long long)primaryState;
- (id)initWithBatchReadResponse:(id)a0;
- (id)stateTypeIdentifier;

@end
