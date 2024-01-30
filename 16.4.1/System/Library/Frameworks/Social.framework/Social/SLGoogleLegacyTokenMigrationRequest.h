@interface SLGoogleLegacyTokenMigrationRequest : NSObject

+ (id)urlRequestForAuthCodeFromAuthToken:(id)a0 clientID:(id)a1 scope:(id)a2;
+ (id)urlRequestForAuthTokenFromLegacyClientToken:(id)a0 username:(id)a1 password:(id)a2;

@end
