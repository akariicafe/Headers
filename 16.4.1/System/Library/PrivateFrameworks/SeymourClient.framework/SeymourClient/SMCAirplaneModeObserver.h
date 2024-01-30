@class RadiosPreferences, NSObject;
@protocol OS_dispatch_queue, SMCAirplaneModeObserverDelegate;

@interface SMCAirplaneModeObserver : NSObject <RadiosPreferencesDelegate>

@property (readonly, nonatomic) RadiosPreferences *radiosPreferences;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<SMCAirplaneModeObserverDelegate> delegate;

- (BOOL)enabled;
- (void)airplaneModeChanged;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;

@end
