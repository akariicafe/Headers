@interface SHRotatingInstallationID : NSObject

+ (void)setCreationDate:(id)a0;
+ (id)creationDate;
+ (id)cachedInstallationIDForUTCDay;
+ (id)installationID;
+ (id)cachedInstallationIDWithMaxAge:(double)a0;
+ (void)setInstallationID:(id)a0;

@end
