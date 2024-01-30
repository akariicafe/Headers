@class NSString, NSArray, NSNumber;

@interface HMDAccessoryFirmwareUpdatePolicyCharacteristicConfiguration : NSObject

@property (readonly) NSString *type;
@property (readonly) NSString *format;
@property (readonly) NSArray *values;
@property (readonly) NSNumber *settlingTime;

- (void).cxx_destruct;
- (id)initWithType:(id)a0 format:(id)a1 values:(id)a2 settlingTime:(id)a3;

@end
