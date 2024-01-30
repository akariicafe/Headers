@class NSString, DMFReportingRequirements, NSXPCListenerEndpoint;

@interface DMFRegisterConfigurationSourceRequest : DMFTaskRequest

@property (copy, nonatomic) NSString *configurationSourceName;
@property (copy, nonatomic) NSString *organizationIdentifier;
@property (copy, nonatomic) NSString *machServiceName;
@property (retain, nonatomic) NSXPCListenerEndpoint *listenerEndpoint;
@property (copy, nonatomic) DMFReportingRequirements *reportingRequirements;

+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
