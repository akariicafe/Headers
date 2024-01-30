@interface DMFFetchInstalledCertificatesRequest : DMFFetchCertificatesRequest

+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;

@end
