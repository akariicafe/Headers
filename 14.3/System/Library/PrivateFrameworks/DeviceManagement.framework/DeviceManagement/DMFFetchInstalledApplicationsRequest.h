@interface DMFFetchInstalledApplicationsRequest : DMFFetchApplicationsRequest

+ (BOOL)isPermittedOnUserConnection;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnSystemConnection;

@end
