@class HMDDevice, NSNumber, NSString;

@interface HMDResidentUserModel : HMDUserModel

@property (retain, nonatomic) HMDDevice *device;
@property (retain, nonatomic) NSNumber *configState;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *deviceIdentifier;

+ (id)properties;

- (void).cxx_destruct;

@end
