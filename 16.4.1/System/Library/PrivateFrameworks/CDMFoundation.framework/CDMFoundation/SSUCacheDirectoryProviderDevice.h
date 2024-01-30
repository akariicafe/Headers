@class NSString;

@interface SSUCacheDirectoryProviderDevice : NSObject <SSUCacheDirectoryProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createDirectoryAttributes;
+ (id)getUserCacheDirectoriesList;

- (id)lookupOrCreateCacheDirectory:(id *)a0;

@end
