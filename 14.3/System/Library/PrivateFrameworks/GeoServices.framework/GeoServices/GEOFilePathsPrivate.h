@interface GEOFilePathsPrivate : NSObject

+ (id)systemContainerPathUsingLibSystem;
+ (id)systemContainerLibraryPathUsingLibSystem;
+ (id)pathForSearchPath:(int)a0 andDomain:(int)a1;
+ (id)systemContainerCachesPathUsingLibSystem;
+ (id)userContainerLibPathUsingLibSystem;
+ (id)userContainerCachesPathUsingLibSystem;

@end
