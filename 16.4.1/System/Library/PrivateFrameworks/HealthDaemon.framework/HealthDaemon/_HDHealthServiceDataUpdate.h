@class NSError, HDHealthServiceCharacteristic, HKDevice;

@interface _HDHealthServiceDataUpdate : NSObject

@property (readonly, nonatomic) unsigned long long sessionIdentifier;
@property (readonly, nonatomic) HDHealthServiceCharacteristic *characteristic;
@property (readonly, nonatomic) HKDevice *device;
@property (readonly, nonatomic) NSError *error;

- (void).cxx_destruct;
- (id)initWithSessionIdentifier:(unsigned long long)a0 characteristic:(id)a1 device:(id)a2 error:(id)a3;

@end
