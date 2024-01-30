@interface DMFFetchDeclarationCapabilitiesRequest : DMFTaskRequest

+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnUserConnection;
+ (id)permittedPlatforms;
+ (Class)whitelistedClassForResultObject;
+ (BOOL)isPermittedOnSystemConnection;

@end
