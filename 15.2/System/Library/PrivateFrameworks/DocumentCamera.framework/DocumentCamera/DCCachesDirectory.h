@class NSURL;

@interface DCCachesDirectory : NSObject

@property (readonly, nonatomic) NSURL *cachesDirectoryURL;

+ (id)sharedCachesDirectory;

- (void).cxx_destruct;
- (id)init;

@end
