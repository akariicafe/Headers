@interface DMFFetchInstalledApplicationsRequest : DMFFetchApplicationsRequest

+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;

@end
