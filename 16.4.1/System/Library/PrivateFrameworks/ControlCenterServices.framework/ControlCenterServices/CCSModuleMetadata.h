@class NSString, NSSet, NSURL;

@interface CCSModuleMetadata : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *moduleIdentifier;
@property (readonly, copy, nonatomic) NSSet *supportedDeviceFamilies;
@property (readonly, copy, nonatomic) NSSet *requiredDeviceCapabilities;
@property (readonly, copy, nonatomic) NSString *associatedBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *associatedBundleMinimumVersion;
@property (readonly, nonatomic) unsigned long long visibilityPreference;
@property (readonly, copy, nonatomic) NSURL *moduleBundleURL;

+ (id)_requiredCapabilitiesForInfoDictionary:(id)a0;
+ (id)_supportedDeviceFamiliesForBundleInfoDictionary:(id)a0;
+ (id)metadataForBundleAtURL:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)_initWithModuleIdentifier:(id)a0 supportedDeviceFamilies:(id)a1 requiredDeviceCapabilities:(id)a2 associatedBundleIdentifier:(id)a3 associatedBundleMinimumVersion:(id)a4 visibilityPreference:(unsigned long long)a5 moduleBundleURL:(id)a6;
- (id)description;
- (void).cxx_destruct;

@end
