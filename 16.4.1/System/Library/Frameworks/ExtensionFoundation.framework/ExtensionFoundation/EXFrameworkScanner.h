@class NSMutableDictionary, NSDictionary, NSURL, NSArray, NSMutableArray;

@interface EXFrameworkScanner : NSOperation

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

- (void)main;
- (void).cxx_destruct;
- (id)appleInternalExtensionPaths;
- (id)combinedAppleInternalExtensionSDK;
- (id)combinedExtensionSDK;
- (void)enumerateAppexptAtURL:(id)a0 block:(id /* block */)a1;
- (void)enumerateBundlesWithPathExtension:(id)a0 atURL:(id)a1 block:(id /* block */)a2;
- (void)enumerateFrameworksBundlesWithFrameworkURL:(id)a0 block:(id /* block */)a1;
- (id)extensionPaths;
- (id)initWithSourceURL:(id)a0;
- (BOOL)isAppleInternalURL:(id)a0;
- (BOOL)isCatalystSupportURL:(id)a0;
- (void)processExtensionSDK:(id)a0 declaringURL:(id)a1;
- (void)processExtensionSDKFromBundle:(struct __CFBundle { } *)a0;
- (void)processExtensionSDKFromFile:(id)a0;
- (void)processExtensionsFromBundle:(struct __CFBundle { } *)a0;
- (void)processExtensionsInDirectory:(id)a0;

@end
