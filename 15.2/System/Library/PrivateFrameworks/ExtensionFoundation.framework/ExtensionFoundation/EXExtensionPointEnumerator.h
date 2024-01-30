@class NSDictionary, NSEnumerator, _EXExtensionPoint;
@protocol EXEnumeratorConfig;

@interface EXExtensionPointEnumerator : NSEnumerator

@property (readonly) id<EXEnumeratorConfig> config;
@property (readonly) NSDictionary *extensionPoints;
@property (readonly) NSEnumerator *extensionPointsKeyEnumerator;
@property (readonly) NSDictionary *currentExtensionPointDict;
@property (readonly) _EXExtensionPoint *currentExtensionPoint;
@property (readonly) BOOL validateExtensionPoints;

+ (void)enumerateExtensionPointsInDirectoryAtURL:(id)a0 block:(id /* block */)a1;

- (id)nextObject;
- (void).cxx_destruct;
- (id)initWithCacheURLs:(id)a0 config:(id)a1;
- (id)initWithSDKDictionary:(id)a0 urls:(id)a1 config:(id)a2;
- (id)initWithSDKDictionary:(id)a0 config:(id)a1;
- (BOOL)validateExtensionPointIdentifier:(id)a0 sdkDictionary:(id)a1;
- (id)translateXPCCacheDictionary:(id)a0;
- (id)synthesizeNSExtensionKeysInDictionary:(id)a0 identifier:(id)a1;

@end
