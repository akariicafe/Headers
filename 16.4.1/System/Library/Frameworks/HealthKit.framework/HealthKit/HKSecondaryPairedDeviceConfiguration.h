@class NSUUID, NSString, NSDateComponents, NSNumber;

@interface HKSecondaryPairedDeviceConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSUUID *nanoRegistryDeviceUUID;
@property (nonatomic) unsigned long long setupType;
@property (copy, nonatomic) NSDateComponents *dateOfBirth;
@property (copy, nonatomic) NSString *firstName;
@property (copy, nonatomic) NSString *lastName;
@property (copy, nonatomic) NSNumber *dsid;
@property (copy, nonatomic) NSString *guardianFirstName;
@property (copy, nonatomic) NSString *guardianLastName;
@property (copy, nonatomic) NSNumber *guardianDSID;
@property (copy, nonatomic) NSString *hashedDSID;
@property (copy, nonatomic) NSString *guardianHashedDSID;

+ (id)secondaryPairedDeviceConfigurationWithNanoRegistryDeviceUUID:(id)a0 setupType:(unsigned long long)a1 firstName:(id)a2 lastName:(id)a3;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)_initWithNanoRegistryDeviceUUID:(id)a0 setupType:(unsigned long long)a1 firstName:(id)a2 lastName:(id)a3;

@end
