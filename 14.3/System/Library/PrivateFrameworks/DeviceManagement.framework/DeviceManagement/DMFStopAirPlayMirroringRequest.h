@interface DMFStopAirPlayMirroringRequest : DMFTaskRequest

+ (BOOL)isPermittedOnUserConnection;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnSystemConnection;

@end
