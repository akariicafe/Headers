@class NSString, NSDictionary, NSSet;

@interface DESBundleRegistry : NSObject <DESBundleRegistryManaging> {
    NSDictionary *_bundleMap;
    NSSet *_lowMemoryExtensions;
    NSSet *_highMemoryExtensions;
    NSSet *_restrictedExtensions;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)initialize;
+ (id)_extensionsWithEndpointName:(id)a0;

- (long long)pluginTypeForBundleId:(id)a0;
- (id)_init;
- (id)infoDictionaryForBundleID:(id)a0;
- (BOOL)containsBundleId:(id)a0;
- (id)init;
- (id)allUnrestrictedExtensionIds;
- (id)allUnrestrictedBundleIds;
- (void).cxx_destruct;
- (id)allBundleIds;

@end
