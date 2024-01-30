@class NSNumber, NSString, NSError, NSDate, HMDDevice;

@interface HMDCharacteristicValueUpdate : HMFObject

@property (readonly, nonatomic) id value;
@property (readonly, nonatomic) NSString *updateIdentifier;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) HMDDevice *remoteDevice;
@property (readonly, nonatomic) NSDate *valueUpdatedTime;
@property (readonly, nonatomic) NSNumber *valueUpdatedStateNumber;

- (id)initWithError:(id)a0;
- (void).cxx_destruct;
- (id)initWithValue:(id)a0 updateIdentifier:(id)a1 remoteDevice:(id)a2;
- (void)setValueUpdatedTime:(id)a0 stateNumber:(id)a1;

@end
