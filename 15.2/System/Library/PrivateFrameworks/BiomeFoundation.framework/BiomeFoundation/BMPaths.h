@class NSString;

@interface BMPaths : NSObject

@property (class, readonly, copy, nonatomic) NSString *basePathForTesting;
@property (class, readonly) NSString *syncDirectory;

+ (id)pathForStreamType:(unsigned long long)a0;
+ (id)rootLibraryDirectory;
+ (id)_unitTestsRootDirectory;
+ (id)rootBiomeDirectory;
+ (id)_simRootDirectory;
+ (void)setBasePathForTestingWithPath:(id)a0;
+ (BOOL)isTestPathOverridden;
+ (id)localFlexibleStorageDirectory;
+ (void)unsetBasePathForTesting;
+ (id)privacyPathname:(id)a0;
+ (id)localDSLDirectory;
+ (id)pathForStreamIdentifier:(id)a0 streamType:(unsigned long long)a1;
+ (id)privacyURLToString:(id)a0;

@end
