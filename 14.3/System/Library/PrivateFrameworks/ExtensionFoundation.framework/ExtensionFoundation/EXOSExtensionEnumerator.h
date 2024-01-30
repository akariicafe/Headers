@class NSArray, NSEnumerator;

@interface EXOSExtensionEnumerator : NSEnumerator

@property (readonly) NSArray *extensionPaths;
@property (readonly) NSEnumerator *extensionPathsEnumerator;

+ (void)enumerateExtensionsInDirectoryAtURL:(id)a0 block:(id /* block */)a1;

- (void).cxx_destruct;
- (id)nextObject;
- (id)initWithCacheURLs:(id)a0;

@end
