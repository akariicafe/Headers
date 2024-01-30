@class NSUUID, NSString, HMCharacteristic;

@interface HMCharacteristicWriteAction : HMAction <NSSecureCoding, HMObjectMerge>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) HMCharacteristic *characteristic;
@property (copy, nonatomic) id targetValue;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_actionWithInfo:(id)a0 home:(id)a1;

- (void).cxx_destruct;
- (id)_serializeForAdd;
- (BOOL)_mergeWithNewObject:(id)a0 operations:(id)a1;
- (BOOL)requiresDeviceUnlock;
- (id)encodeAsProtoBuf;
- (BOOL)isValid;
- (id)initWithUUID:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)type;
- (BOOL)_handleUpdates:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCharacteristic:(id)a0 targetValue:(id)a1;
- (id)commonInitWith:(id)a0 targetValue:(id)a1;
- (void)__configureWithContext:(id)a0 actionSet:(id)a1;
- (id)allowedTargetValueClasses;
- (void)_updateTargetValue:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithCharacteristic:(id)a0 targetValue:(id)a1 uuid:(id)a2;
- (BOOL)isKindOfAllowedTargetValueClass:(id)a0;
- (void)updateTargetValue:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithProtoBuf:(id)a0 home:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
