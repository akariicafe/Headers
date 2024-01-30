@class NSString, MCMPOSIXUser, NSURL;

@interface MCMUserIdentity : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) id plist;
@property (readonly, nonatomic) MCMPOSIXUser *posixUser;
@property (readonly, nonatomic, getter=isDataSeparated) BOOL dataSeparated;
@property (readonly, nonatomic, getter=isNoSpecificPersona) BOOL noSpecificPersona;
@property (readonly, nonatomic) NSString *personaUniqueString;
@property (readonly, nonatomic) NSString *shortDescription;
@property (readonly, nonatomic) NSURL *homeDirectoryURL;
@property (readonly, nonatomic) BOOL homeDirectoryExists;
@property (readonly, nonatomic) int personaType;
@property (readonly, nonatomic) unsigned int kernelPersonaID;
@property (nonatomic) long long extensionHandle;

+ (id)userIdentityWithPlist:(id)a0 cache:(id)a1 error:(unsigned long long *)a2;
+ (BOOL)isUserIdentityRequiredForContainerClass:(unsigned long long)a0;
+ (id)_identifierForPOSIXUID:(unsigned int)a0 personaUniqueString:(id)a1 personaType:(int)a2;

- (id)userIdentityWithPOSIXUser:(id)a0;
- (BOOL)isStrictlyEqualToUserIdentity:(id)a0;
- (BOOL)isEqualToUserIdentity:(id)a0;
- (id)_descriptionForPersonaType:(int)a0;
- (id)initWithPOSIXUser:(id)a0 homeDirectoryURL:(id)a1 personaUniqueString:(id)a2 personaType:(int)a3 kernelPersonaID:(unsigned int)a4;
- (id)initWithPlist:(id)a0 cache:(id)a1 error:(unsigned long long *)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithVersion2PlistDictionary:(id)a0 cache:(id)a1 error:(unsigned long long *)a2;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithVersion1PlistDictionary:(id)a0 cache:(id)a1 error:(unsigned long long *)a2;

@end
