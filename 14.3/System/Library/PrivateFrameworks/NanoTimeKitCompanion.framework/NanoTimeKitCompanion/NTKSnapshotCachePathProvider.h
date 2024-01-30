@class NSURL, NSString;

@interface NTKSnapshotCachePathProvider : NSObject <BSPathProviding>

@property (readonly, nonatomic) NSURL *defaultPath;
@property (readonly, nonatomic) NSURL *libraryPath;
@property (readonly, nonatomic) NSURL *cachesPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
