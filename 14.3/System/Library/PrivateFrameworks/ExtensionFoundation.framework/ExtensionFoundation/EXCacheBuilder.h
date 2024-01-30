@class NSMutableDictionary, NSDictionary, NSURL, NSArray, NSMutableArray;

@interface EXCacheBuilder : NSOperation

@property (retain) NSMutableDictionary *_combinedExtensionSDK;
@property (retain) NSMutableDictionary *_combinedAppleInternalExtensionSDK;
@property (retain) NSMutableArray *_extensions;
@property (retain) NSMutableArray *_appleInternalExtensions;
@property (readonly) NSURL *sourceURL;
@property (readonly) NSDictionary *combinedExtensionSDK;
@property (readonly) NSDictionary *combinedAppleInternalExtensionSDK;
@property (readonly) NSArray *extensionPaths;
@property (readonly) NSArray *appleInternalExtensionPaths;

+ (id)rootURL;
+ (id)frameworkPaths;

- (void).cxx_destruct;
- (void)main;
- (id)initWithSourceURL:(id)a0;
- (BOOL)isCatalystSupportURL:(id)a0;
- (BOOL)isAppleInternalURL:(id)a0;
- (void)enumerateBundlesWithPathExtension:(id)a0 atURL:(id)a1 block:(id /* block */)a2;
- (id)extensionPaths;
- (id)combinedExtensionSDK;
- (id)appleInternalExtensionPaths;
- (id)combinedAppleInternalExtensionSDK;
- (void)processExtensionSDKFromBundle:(struct __CFBundle { } *)a0;
- (void)processExtensionsFromBundle:(struct __CFBundle { } *)a0;
- (void)enumerateFrameworksBundlesWithFrameworkURL:(id)a0 block:(id /* block */)a1;
- (BOOL)writeCacheToURL:(id)a0 options:(unsigned long long)a1;

@end
