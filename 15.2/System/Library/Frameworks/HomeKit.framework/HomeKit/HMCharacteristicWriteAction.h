@class HMCharacteristic, NSSet, NSUUID, NSString;

@interface HMCharacteristicWriteAction : HMAction <NSSecureCoding, HMObjectMerge>

@property (class, readonly) NSSet *allowedTargetValueClassesForShortcuts;
@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) HMCharacteristic *characteristic;
@property (copy, nonatomic) id targetValue;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_actionWithInfo:(id)a0 home:(id)a1;

- (id)initWithUUID:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_handleUpdates:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)type;
- (BOOL)isValid;
- (id)_serializeForAdd;
- (BOOL)_mergeWithNewObject:(id)a0 operations:(id)a1;
- (BOOL)requiresDeviceUnlock;
- (void)__configureWithContext:(id)a0 actionSet:(id)a1;
- (id)encodeAsProtoBuf;
- (id)commonInitWith:(id)a0 targetValue:(id)a1;
- (id)initWithCharacteristic:(id)a0 targetValue:(id)a1;
- (id)initWithCharacteristic:(id)a0 targetValue:(id)a1 uuid:(id)a2;
- (void)updateTargetValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)_updateTargetValue:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)isKindOfAllowedTargetValueClass:(id)a0;
- (id)initWithProtoBuf:(id)a0 home:(id)a1;

@end
