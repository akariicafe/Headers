@interface GEOFilePathsPrivate : NSObject

+ (id)pathForSearchPath:(int)a0 andDomain:(int)a1;
+ (id)systemContainerPathUsingLibSystem;
+ (id)systemContainerLibraryPathUsingLibSystem;
+ (id)systemContainerCachesPathUsingLibSystem;
+ (id)userContainerLibPathUsingLibSystem;
+ (id)userContainerCachesPathUsingLibSystem;

@end
