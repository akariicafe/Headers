@interface HMDCharacteristicEvent : HMDCharacteristicEventBase <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) id eventValue;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)dumpState;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)emptyModelObject;
- (void)_transactionObjectUpdated:(id)a0 newValues:(id)a1 message:(id)a2;
- (void)_transactionObjectRemoved:(id)a0 message:(id)a1;
- (id)modelObjectWithChangeType:(unsigned long long)a0;
- (id)createPayload;
- (id)initWithModel:(id)a0 home:(id)a1;
- (void)_handleUpdateRequest:(id)a0;
- (id)analyticsTriggerEventData;
- (BOOL)_compareEventValue:(id)a0;
- (BOOL)_evaluateNewValue:(id)a0;

@end
