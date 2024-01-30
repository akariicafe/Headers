@class NSString, DMFReportingRequirements;

@interface DMFConfigurationSource : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *organizationIdentifier;
@property (copy, nonatomic) NSString *machServiceName;
@property (retain, nonatomic) DMFReportingRequirements *reportingRequirements;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;

@end
