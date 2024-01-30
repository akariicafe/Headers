@class NSString, NSUserDefaults, NSObject;
@protocol OS_dispatch_queue;

@interface NFTapToRadar : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    Class _lsApplicationWorkspace;
    NSString *_pendingRequest;
    NSUserDefaults *_userDefaults;
    struct __CFRunLoopSource { } *_runLoopSource;
    struct __CFUserNotification { } *_userNotification;
}

+ (void)handleCallback:(unsigned long long)a0;
+ (id)_getInstance;
+ (void)requestTapToRadar:(id)a0 preferences:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)_handleCallbackSync:(unsigned long long)a0;
- (void)_requestTapToRadarSync:(id)a0 prefs:(id)a1;

@end
