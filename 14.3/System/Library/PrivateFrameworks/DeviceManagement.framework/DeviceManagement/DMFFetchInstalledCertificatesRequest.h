@interface DMFFetchInstalledCertificatesRequest : DMFFetchCertificatesRequest

+ (BOOL)isPermittedOnUserConnection;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnSystemConnection;

@end
