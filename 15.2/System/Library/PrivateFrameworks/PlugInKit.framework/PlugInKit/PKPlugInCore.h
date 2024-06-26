@class NSString, NSDictionary, NSURL, NSUUID, NSDate, NSData;

@interface PKPlugInCore : NSObject

@property (retain) NSString *identifier;
@property (retain) NSString *originalIdentifier;
@property (retain) NSURL *url;
@property (retain) NSDictionary *bundleInfoDictionary;
@property (retain) NSDictionary *plugInDictionary;
@property (retain) NSDictionary *entitlements;
@property (retain) NSDictionary *annotations;
@property (copy) NSURL *containingUrl;
@property (copy) NSString *containingBundleIdentifier;
@property (readonly) BOOL oldStyle;
@property (readonly) NSString *path;
@property (readonly) NSString *containingPath;
@property BOOL onSystemVolume;
@property (readonly) NSUUID *discoveryInstanceUUID;
@property (readonly) NSDictionary *attributes;
@property (readonly) NSString *version;
@property (readonly) id protocolSpec;
@property (readonly) NSString *principalSpec;
@property unsigned long long hubProtocolVersion;
@property (readonly) NSString *sdkSpec;
@property (readonly) NSString *localizedName;
@property (readonly) NSString *localizedShortName;
@property (retain) NSString *localizedContainingName;
@property (readonly) NSDictionary *localizedFileProviderActionNames;
@property long long lastModified;
@property (readonly) NSDate *timestamp;
@property (retain) NSUUID *uuid;
@property (retain) NSData *cdhash;
@property (retain) NSString *requirement;
@property (readonly) BOOL isAppExtension;
@property (readonly) BOOL isMultiplexed;
@property (readonly) BOOL isHybrid;
@property (readonly) BOOL isDedicated;
@property (readonly) BOOL isData;
@property BOOL isRBManaged;
@property (readonly) unsigned int extensionPointPlatform;
@property (readonly, nonatomic) NSURL *dataContainerURL;
@property (readonly, nonatomic) NSString *bootInstance;
@property (nonatomic) unsigned long long annotationTimestamp;
@property (readonly) BOOL shouldTerminateOnHold;

+ (id)readSDKDictionary:(id)a0 forPlatform:(unsigned int)a1;

- (id)diagnose;
- (id)export:(id *)a0;
- (BOOL)useBundle:(id)a0 error:(id *)a1;
- (void)canonicalize;
- (id)sdkDictionaryWithInfoPlist:(id)a0 extensionPointCache:(id)a1;
- (id)attribute:(id)a0;
- (void)_loadLocalizedNames;
- (id)description;
- (id)resolveSDKWithInfoPlist:(id)a0 extensionPointCache:(id)a1;
- (id)augmentInterface:(id)a0;
- (void)updateFromForm:(id)a0;
- (id)pluginKey:(id)a0;
- (id)embeddedProtocolSpec;
- (id)infoKey:(id)a0;
- (id)mergeSharedResources:(id)a0 into:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_localizedFileProviderActionNamesForPKDict:(id)a0 fromBundle:(id)a1;
- (id)mergeSDKDictionary:(id)a0 intoExtensionDictionary:(id)a1;
- (void)_loadLocalizedFileProviderActionNames;
- (id)init;
- (void)setAnnotation:(id)a0 value:(id)a1;
- (BOOL)setDictionaries:(id)a0;
- (BOOL)setupWithName:(id)a0 extensionPointPlatform:(unsigned int)a1 url:(id)a2 bundleInfo:(id)a3 uuid:(id)a4 discoveryInstanceUUID:(id)a5 extensionPointCache:(id)a6;
- (void)localizedInfoDictionaryForKeys:(id)a0 completion:(id /* block */)a1;
- (BOOL)setupWithForm:(id)a0;
- (unsigned long long)hash;
- (id)normalizeInfoDictionary:(id)a0;
- (id)initWithForm:(id)a0;
- (id)sdkOnlyKeyPaths;
- (id)initWithName:(id)a0 extensionPointPlatform:(unsigned int)a1 url:(id)a2 bundleInfo:(id)a3 uuid:(id)a4 discoveryInstanceUUID:(id)a5 extensionPointCache:(id)a6;
- (id)debugDescription;
- (id)embeddedCodePath;

@end
