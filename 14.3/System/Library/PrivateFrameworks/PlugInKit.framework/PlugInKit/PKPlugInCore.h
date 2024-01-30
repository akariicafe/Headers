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

+ (id)readSDKDictionary:(id)a0 forPlatform:(unsigned int)a1;

- (id)embeddedCodePath;
- (id)sdkOnlyKeyPaths;
- (id)pluginKey:(id)a0;
- (id)initWithName:(id)a0 extensionPointPlatform:(unsigned int)a1 url:(id)a2 bundleInfo:(id)a3 uuid:(id)a4 discoveryInstanceUUID:(id)a5 extensionPointCache:(id)a6;
- (id)diagnose;
- (id)infoKey:(id)a0;
- (id)embeddedProtocolSpec;
- (BOOL)useBundle:(id)a0 error:(id *)a1;
- (id)export:(id *)a0;
- (id)augmentInterface:(id)a0;
- (id)mergeSharedResources:(id)a0 into:(id)a1;
- (void)_loadLocalizedFileProviderActionNames;
- (id)normalizeInfoDictionary:(id)a0;
- (id)_localizedFileProviderActionNamesForPKDict:(id)a0 fromBundle:(id)a1;
- (id)attribute:(id)a0;
- (id)resolveSDKWithInfoPlist:(id)a0 extensionPointCache:(id)a1;
- (void)canonicalize;
- (id)mergeSDKDictionary:(id)a0 intoExtensionDictionary:(id)a1;
- (void)_loadLocalizedNames;
- (id)sdkDictionaryWithInfoPlist:(id)a0 extensionPointCache:(id)a1;
- (void)updateFromForm:(id)a0;
- (void)localizedInfoDictionaryForKeys:(id)a0 completion:(id /* block */)a1;
- (void)setAnnotation:(id)a0 value:(id)a1;
- (BOOL)setupWithForm:(id)a0;
- (BOOL)setDictionaries:(id)a0;
- (BOOL)setupWithName:(id)a0 extensionPointPlatform:(unsigned int)a1 url:(id)a2 bundleInfo:(id)a3 uuid:(id)a4 discoveryInstanceUUID:(id)a5 extensionPointCache:(id)a6;
- (id)initWithForm:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
