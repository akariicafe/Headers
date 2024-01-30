@class NSString, NSUUID, NSArray, NSDictionary, NSNumber;

@interface ACXSyncedApplication : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *applicationName;
@property (retain, nonatomic) NSUUID *databaseUUID;
@property (nonatomic) unsigned long long sequenceNumber;
@property (copy, nonatomic) NSArray *counterpartIdentifiers;
@property (nonatomic) unsigned long long applicationType;
@property (nonatomic) BOOL isDeletable;
@property (copy, nonatomic) NSDictionary *localizedInfoPlistStrings;
@property (retain, nonatomic) NSNumber *externalVersionIdentifier;
@property (readonly, nonatomic) NSString *_rawApplicationName;
@property (readonly, nonatomic) BOOL isSystemApp;

+ (id)localizedAppNameFromRecord:(id)a0;
+ (id)buildLocalizedInfoPlistStringsDictForAppBundleURL:(id)a0 watchKitExtensionURL:(id)a1;
+ (id)localizedInfoPlistKeysLoadAppOnly;
+ (id)localizedInfoPlistKeysLoadAnywhere;

- (id)initForTesting;
- (void)encodeWithCoder:(id)a0;
- (id)serialize;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)localizedInfoPlistStringsForKeys:(id)a0 fetchingFirstMatchingLocalizationInList:(id)a1;
- (id)initWithBundleID:(id)a0 databaseUUID:(id)a1 sequenceNumber:(unsigned long long)a2;
- (id)initWithSerializedDictionary:(id)a0;
- (id)initWithApplicationRecord:(id)a0 databaseUUID:(id)a1 sequenceNumber:(unsigned long long)a2;
- (id)serializeAsRemoteApplication;

@end
