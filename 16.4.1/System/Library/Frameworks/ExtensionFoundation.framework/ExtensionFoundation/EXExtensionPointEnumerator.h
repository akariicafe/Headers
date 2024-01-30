@class NSEnumerator, NSString, NSDictionary, NSMutableDictionary, _EXExtensionPoint;
@protocol EXEnumeratorConfig;

@interface EXExtensionPointEnumerator : NSEnumerator

@property (readonly) id<EXEnumeratorConfig> config;
@property (readonly) NSDictionary *extensionPoints;
@property (readonly) NSEnumerator *extensionPointsKeyEnumerator;
@property (readonly) _EXExtensionPoint *currentExtensionPoint;
@property (readonly) BOOL validateExtensionPoints;
@property (readonly) NSString *currentIdentifier;
@property (readonly) NSMutableDictionary *currentSDKDictionaryForPlatform;

+ (void)enumerateExtensionPointsInDirectoryAtURL:(id)a0 block:(id /* block */)a1;
+ (id)translateAppexptDictionary:(id)a0 definitionURL:(id)a1 isCatalyst:(BOOL)a2;

- (id)nextObject;
- (void).cxx_destruct;
- (id)flattenEXExtensionPointConfigurationInDictionary:(id)a0 identifier:(id)a1;
- (id)initWithCacheURLs:(id)a0 config:(id)a1;
- (id)initWithSDKDictionary:(id)a0 config:(id)a1;
- (id)initWithSDKDictionary:(id)a0 urls:(id)a1 config:(id)a2;
- (id)synthesizeNSExtensionKeysInDictionary:(id)a0 identifier:(id)a1;
- (id)translateXPCCacheDictionary:(id)a0;
- (BOOL)validateExtensionPointIdentifier:(id)a0 sdkDictionary:(id)a1;

@end
