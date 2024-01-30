@class NSString;

@interface HMCharacteristicReadRequest : HMCharacteristicRequest <HMReadOperation>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)readRequestWithCharacteristic:(id)a0;

- (BOOL)isEqual:(id)a0;
- (id)initWithCharacteristic:(id)a0;

@end
