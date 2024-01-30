@class NSDictionary;

@interface CRKFetchClassroomConfigurationResultObject : CATTaskResultObject

@property (copy, nonatomic) NSDictionary *configuration;
@property (copy, nonatomic) NSDictionary *configurationsByType;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
