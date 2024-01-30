@class NSObject;
@protocol OS_dispatch_queue;

@interface CSHostLauncherDarwin : NSObject {
    struct __IOHIDUserDevice { } *_device;
    NSObject<OS_dispatch_queue> *_hidCallbackQueue;
}

+ (id)sharedInstance;
+ (id)propertyDictForDarwin;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)wakeHostForVoiceTrigger;

@end
