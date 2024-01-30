@interface HMCharacteristicWriteRequest : HMCharacteristicRequest

@property (readonly, nonatomic) id value;

+ (id)writeRequestWithCharacteristic:(id)a0 value:(id)a1;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCharacteristic:(id)a0 value:(id)a1;
- (BOOL)isEqual:(id)a0;

@end
