@class NSDictionary, NSEnumerator, _EXExtensionPoint;

@interface EXExtensionPointEnumerator : NSEnumerator

@property (readonly) NSDictionary *extensionPoints;
@property (readonly) NSEnumerator *extensionPointsKeyEnumerator;
@property (readonly) NSDictionary *currentExtensionPointDict;
@property (readonly) _EXExtensionPoint *currentExtensionPoint;

+ (void)enumerateExtensionPointsInDirectoryAtURL:(id)a0 block:(id /* block */)a1;

- (void).cxx_destruct;
- (id)nextObject;
- (id)initWithCacheURLs:(id)a0;
- (id)translateXPCCacheDictionary:(id)a0;

@end
