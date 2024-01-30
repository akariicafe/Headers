@class NSString, DMFReportingRequirements;

@interface DMFConfigurationSource : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *organizationIdentifier;
@property (copy, nonatomic) NSString *machServiceName;
@property (retain, nonatomic) DMFReportingRequirements *reportingRequirements;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)debugDescription;

@end
