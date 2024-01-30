@class NSString;

@interface DMTFetchAutomatedDeviceEnrollmentPrerequisitesResultObject : CATTaskResultObject

@property (copy, nonatomic) NSString *serialNumber;
@property (copy, nonatomic) NSString *deviceUDID;
@property (copy, nonatomic) NSString *modelIdentifier;
@property (copy, nonatomic) NSString *modelName;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
