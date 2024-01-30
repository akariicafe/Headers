@interface EXEnumerator : NSEnumerator

+ (id)overrideCacheURL;
+ (id)extensionCacheFileURLs;
+ (id)extensionInstallDirectoryURLs;
+ (id)extensionPointDefinitionDirectoryURLs;
+ (id)extensionEnumerator;
+ (id)extensionPointDefinitionEnumerator;

@end
