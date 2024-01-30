@interface DMFShutDownDeviceRequest : DMFTaskRequest

+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;

@end
