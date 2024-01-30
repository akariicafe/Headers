@class NSURL;

@interface MSNTTR : NSObject {
    struct __CFRunLoopSource { } *_runLoopSource;
    struct __CFUserNotification { } *_userNotification;
}

@property (retain) NSURL *url;
@property (readonly) BOOL TTRInProgress;
@property BOOL pendedTTR;

+ (id)sharedInstance;

- (void)continueTTR;
- (void).cxx_destruct;
- (void)handleCallback:(unsigned long long)a0;
- (void)completeTTR:(id)a0;
- (void)beginTTRWithTitle:(id)a0;
- (void)beginTTRWithTitle:(id)a0 date:(id)a1;

@end
