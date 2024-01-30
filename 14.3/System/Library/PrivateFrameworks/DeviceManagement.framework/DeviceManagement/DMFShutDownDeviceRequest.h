@interface DMFShutDownDeviceRequest : DMFTaskRequest

+ (BOOL)isPermittedOnUserConnection;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnSystemConnection;

@end
