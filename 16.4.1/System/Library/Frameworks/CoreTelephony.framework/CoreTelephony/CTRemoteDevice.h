@class NSArray, CTDeviceIdentifier;

@interface CTRemoteDevice : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CTDeviceIdentifier *deviceID;
@property (retain, nonatomic) NSArray *remoteDisplayPlans;
@property (retain, nonatomic) NSArray *remotePlans;
@property (nonatomic) BOOL isMultiESimEnabled;

- (id)modelName;
- (void)encodeWithCoder:(id)a0;
- (id)deviceName;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)deviceType;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)EID;

@end
