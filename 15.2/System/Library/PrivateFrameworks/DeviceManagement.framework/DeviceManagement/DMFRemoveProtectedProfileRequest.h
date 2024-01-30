@interface DMFRemoveProtectedProfileRequest : DMFRemoveProfileRequest

+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;

@end
