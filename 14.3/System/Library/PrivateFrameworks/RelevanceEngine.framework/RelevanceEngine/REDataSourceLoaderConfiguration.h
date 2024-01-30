@class NSString;

@interface REDataSourceLoaderConfiguration : NSObject <REClassLoaderConfiguration>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (Class)desiredClassForLoader;
- (Class)desiredClassFromBundle:(id)a0 forKey:(id)a1;
- (BOOL)shouldLoadBundleClass:(Class)a0 forKey:(id)a1;

@end
