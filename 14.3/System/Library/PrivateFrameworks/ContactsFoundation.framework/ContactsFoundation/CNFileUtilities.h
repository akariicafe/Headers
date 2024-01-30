@class CNProcessSharedLock;
@protocol CNFileServices;

@interface CNFileUtilities : NSObject {
    id<CNFileServices> _services;
}

@property (class, readonly, nonatomic) CNProcessSharedLock *fileLock;

+ (id)sharedInstance;
+ (id)initializeFileLock;
+ (id)sharedLockDirectoryURLWithFileServices:(id)a0;
+ (id)requestSharedLockDirectoryURLWithFileServices:(id)a0;
+ (id)os_log;

- (id)initWithFileServices:(id)a0;
- (id)sharedLockUrlWithName:(id)a0;
- (id)sharedLockDirectoryUrl;
- (BOOL)isFileAtUrlOnARemoteFileSystem:(id)a0;
- (id)proxyLockUrlForFileAtUrl:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
