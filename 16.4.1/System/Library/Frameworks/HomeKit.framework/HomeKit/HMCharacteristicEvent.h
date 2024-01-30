@class NSString, HMCharacteristic;
@protocol NSCopying;

@interface HMCharacteristicEvent : HMEvent <NSSecureCoding, HMCharacteristicEventProtocol, NSCopying, NSMutableCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) id<NSCopying> triggerValue;
@property (readonly, nonatomic) HMCharacteristic *characteristic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createWithDictionary:(id)a0 home:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)_mergeWithNewObject:(id)a0;
- (id)_serializeForAdd;
- (void)_updateFromDictionary:(id)a0;
- (id)initWithCharacteristic:(id)a0 triggerValue:(id)a1;
- (id)initWithDict:(id)a0 characteristic:(id)a1 triggerValue:(id)a2;
- (void)setCharacteristic:(id)a0;
- (void)updateTriggerValue:(id)a0 completionHandler:(id /* block */)a1;

@end
