@class NSMutableArray;

@interface AXBOpaqueTouchSettingsManager : NSObject {
    NSMutableArray *_trackedServices;
    struct __IOHIDEventSystemClient { } *_systemFilterClient;
    BOOL _running;
    BOOL _currentlyBlockingEvents;
    unsigned long long _lastActivityNotification;
}

+ (id)sharedInstance;

- (void)dealloc;
- (void)start;
- (void).cxx_destruct;
- (id)initSharedInstance;
- (void)_applyPreferencesToDeviceService:(struct __IOHIDServiceClient { } *)a0;
- (void)_resendPreferencesToServices;
- (BOOL)_shouldBlockOpaqueTouchEvents;
- (void)deviceServiceAppeared:(struct __IOHIDServiceClient { } *)a0;
- (void)deviceServiceDisappeared:(struct __IOHIDServiceClient { } *)a0;

@end
