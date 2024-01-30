@class NSObject, NPSManager;
@protocol OS_dispatch_queue;

@interface NTKTimeTravelSettings : NSObject {
    NPSManager *_npsManager;
    BOOL _timeTravelEnabled;
    NSObject<OS_dispatch_queue> *_prefsQueue;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_handlePrefsChanged;
- (BOOL)_isTimeTravelEnabledInPreferences;
- (BOOL)isTimeTravelEnabled;
- (void)setTimeTravelEnabled:(BOOL)a0;

@end
