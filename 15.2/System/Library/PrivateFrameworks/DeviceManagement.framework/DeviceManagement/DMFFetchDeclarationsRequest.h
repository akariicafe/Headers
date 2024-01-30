@class NSString, NSArray;

@interface DMFFetchDeclarationsRequest : DMFTaskRequest

@property (nonatomic) BOOL includeInternalState;
@property (nonatomic) BOOL includePayloadContents;
@property (copy, nonatomic) NSString *organizationIdentifier;
@property (copy, nonatomic) NSArray *payloadIdentifiers;

+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;
+ (Class)whitelistedClassForResultObject;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
