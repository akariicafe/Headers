@class NSData;

@interface MIInstallationIdentity : NSObject <NSCopying>

@property (copy, nonatomic) NSData *installSessionID;
@property (copy, nonatomic) NSData *uniqueInstallID;

+ (id)identityForUpdateOfBundle:(id)a0 error:(id *)a1;
+ (id)installSessionIDEAName;
+ (id)installationIdentityForBundle:(id)a0 settingIfNotSet:(BOOL)a1 error:(id *)a2;
+ (id)newIdentityForBundle:(id)a0;
+ (id)uniqueInstallIDEAName;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)_writeToBundle:(id)a0 error:(id *)a1;
- (BOOL)_writeToBundle:(id)a0 fd:(int)a1 fdLocation:(id)a2 error:(id *)a3;
- (id)initWithSessionID:(id)a0 uniqueID:(id)a1;
- (BOOL)writeToBundle:(id)a0 error:(id *)a1;

@end
