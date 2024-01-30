@interface GEOFilePathsPrivate : NSObject

+ (id)daemonContainerPathUsingLibSystem;
+ (id)systemContainerLibraryPathUsingLibSystem;
+ (id)userContainerCachesPathUsingLibSystem;
+ (id)systemContainerCachesPathUsingLibSystem;
+ (id)daemonContainerCachesPathUsingLibSystem;
+ (id)userContainerLibPathUsingLibSystem;
+ (id)daemonContainerLibraryPathUsingLibSystem;
+ (id)pathForSearchPath:(int)a0 andDomain:(int)a1;
+ (id)systemContainerPathUsingLibSystem;

@end
