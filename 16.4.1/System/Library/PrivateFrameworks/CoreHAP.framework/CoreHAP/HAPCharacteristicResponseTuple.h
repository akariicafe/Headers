@class HAPCharacteristic, NSData, NSDate, NSNumber, NSError;

@interface HAPCharacteristicResponseTuple : HMFObject

@property (retain, nonatomic) HAPCharacteristic *characteristic;
@property (retain, nonatomic) id value;
@property (retain, nonatomic) NSNumber *stateNumber;
@property (retain, nonatomic) NSDate *valueUpdatedTime;
@property (retain, nonatomic) NSData *notificationContext;
@property (retain, nonatomic) NSError *error;

+ (id)responseTupleForCharacteristic:(id)a0 error:(id)a1;

- (void).cxx_destruct;

@end
