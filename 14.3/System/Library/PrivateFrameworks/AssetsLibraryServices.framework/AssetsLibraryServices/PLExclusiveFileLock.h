@class NSString, NSURL;

@interface PLExclusiveFileLock : NSObject <PLUnlocker> {
    NSURL *_url;
    int _fd;
}

@property (readonly, nonatomic) BOOL isLocked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)unlock;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithURL:(id)a0;
- (id)lockData;
- (BOOL)lockWithError:(id *)a0;
- (id)lockFailure;

@end
