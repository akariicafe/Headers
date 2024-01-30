@class NSArray, CTDeviceIdentifier;

@interface CTRemoteDevice : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CTDeviceIdentifier *deviceID;
@property (retain, nonatomic) NSArray *remoteDisplayPlans;
@property (retain, nonatomic) NSArray *remotePlans;

- (id)EID;
- (id)deviceName;
- (unsigned long long)deviceType;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
