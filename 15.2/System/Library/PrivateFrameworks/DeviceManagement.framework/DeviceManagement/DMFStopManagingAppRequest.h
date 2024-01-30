@interface DMFStopManagingAppRequest : DMFAppRequest

+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;

@end
