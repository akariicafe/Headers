@class NSString, NSMutableDictionary, NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface _ATXAppDailyDoseCurrentStore : NSObject {
    NSString *_path;
    NSObject<OS_dispatch_queue> *_queue;
    _Atomic int _fd;
    NSMutableDictionary *_cache;
    NSDate *_expires;
}

- (void)closePermanently;
- (id)initWithPath:(id)a0;
- (double)currentDoseFor:(id)a0;
- (void)_readCacheAndExpiration;
- (void)increaseDoseFor:(id)a0 by:(double)a1;
- (BOOL)isExpiredAt:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_overwrite;
- (void)dealloc;
- (BOOL)isExpiredNow;
- (void)_openFd;
- (id)_getCacheFromFile;
- (void)resetWithDurationMap:(id)a0 on:(id)a1;

@end
