@class NSArray, CTDeviceIdentifier;

@interface CTRemoteDevice : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CTDeviceIdentifier *deviceID;
@property (retain, nonatomic) NSArray *remoteDisplayPlans;
@property (retain, nonatomic) NSArray *remotePlans;
@property (nonatomic) BOOL isMultiESimEnabled;

- (id)EID;
- (unsigned long long)deviceType;
- (id)deviceName;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
