@class NSString, NSMutableDictionary, NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface _ATXAppDailyDoseCurrentStore : NSObject {
    NSString *_path;
    NSObject<OS_dispatch_queue> *_queue;
    _Atomic int _fd;
    NSMutableDictionary *_cache;
    NSDate *_expires;
}

- (id)initWithPath:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)resetWithDurationMap:(id)a0 on:(id)a1;
- (void)increaseDoseFor:(id)a0 by:(double)a1;
- (BOOL)isExpiredAt:(id)a0;
- (BOOL)isExpiredNow;
- (void)_readCacheAndExpiration;
- (id)_getCacheFromFile;
- (void)_openFd;
- (void)closePermanently;
- (double)currentDoseFor:(id)a0;
- (void)_overwrite;

@end
