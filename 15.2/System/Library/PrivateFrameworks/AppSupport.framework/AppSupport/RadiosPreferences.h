@class NSObject;
@protocol OS_dispatch_queue, OS_os_log, RadiosPreferencesDelegate;

@interface RadiosPreferences : NSObject {
    struct __SCPreferences { } *_prefs;
    int _applySkipCount;
    BOOL _isCachedAirplaneModeValid;
    BOOL _cachedAirplaneMode;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSObject<OS_os_log> *radios_prefs_log;
}

@property (nonatomic) BOOL airplaneMode;
@property (nonatomic) id<RadiosPreferencesDelegate> delegate;
@property (nonatomic) BOOL notifyForExternalChangeOnly;

+ (BOOL)shouldMirrorAirplaneMode;

- (void *)getValueForKey:(id)a0;
- (id)initWithQueue:(id)a0;
- (BOOL)telephonyStateWithBundleIdentifierOut:(id *)a0;
- (void)setTelephonyState:(BOOL)a0 fromBundleID:(id)a1;
- (void)initializeSCPrefs:(id)a0;
- (void)setAirplaneModeWithoutMirroring:(BOOL)a0;
- (void)setValue:(void *)a0 forKey:(id)a1;
- (void)setAirplaneModeInNSS:(BOOL)a0;
- (void)notifyTarget:(unsigned int)a0;
- (void *)getValueWithLockForKey:(id)a0;
- (id)init;
- (void)refresh;
- (void)synchronize;
- (void)setCallback:(void /* function */ *)a0 withContext:(struct { long long x0; void *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; } *)a1;
- (void)dealloc;
- (oneway void)release;

@end
