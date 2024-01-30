@class NSString, NSArray;

@interface DMFFetchDeclarationsRequest : DMFTaskRequest

@property (nonatomic) BOOL includeInternalState;
@property (nonatomic) BOOL includePayloadContents;
@property (copy, nonatomic) NSString *organizationIdentifier;
@property (copy, nonatomic) NSArray *payloadIdentifiers;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnUserConnection;
+ (id)permittedPlatforms;
+ (Class)whitelistedClassForResultObject;
+ (BOOL)isPermittedOnSystemConnection;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
