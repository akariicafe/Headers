@interface DMFRemoveProtectedProfileRequest : DMFRemoveProfileRequest

+ (BOOL)isPermittedOnUserConnection;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnSystemConnection;

@end
