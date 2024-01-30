@class HMNumberRange, NSString, HMCharacteristic;

@interface HMCharacteristicThresholdRangeEvent : HMEvent <HMCharacteristicEventProtocol, NSSecureCoding, NSCopying, NSMutableCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) HMCharacteristic *characteristic;
@property (readonly, copy, nonatomic) HMNumberRange *thresholdRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createWithDictionary:(id)a0 home:(id)a1;
+ (BOOL)isSupportedForHome:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_serializeForAdd;
- (void)_handleEventUpdatedNotification:(id)a0;
- (void)setCharacteristic:(id)a0;
- (void)setThresholdRange:(id)a0;
- (id)initWithDict:(id)a0 characteristic:(id)a1 thresholdRange:(id)a2;
- (void)_updateThresholdRange:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithCharacteristic:(id)a0 thresholdRange:(id)a1;
- (void)updateThresholdRange:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;

@end
