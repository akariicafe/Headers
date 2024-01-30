@class NSNumber, NSMutableDictionary, NSObject, NSHashTable, NSDate, NSMutableArray, NSLocale;
@protocol OS_os_activity;

@interface AXTapticTimeManager : NSObject {
    NSMutableArray *_enqueuedSounds;
    NSMutableArray *_enqueuedSoundDelays;
    NSHashTable *_observers;
    unsigned int _ssIDHapticFast[24];
    unsigned int _ssIDHapticSlow[24];
    unsigned int _ssIDHapticMorse[10];
    NSMutableDictionary *_soundToPatterns;
    NSMutableDictionary *_hapticsDescriptions;
    BOOL _is24Hour;
    NSNumber *_cachedSpeed;
    long long _currentSsid;
    NSObject<OS_os_activity> *_activity;
    struct os_activity_scope_state_s { unsigned long long opaque[2]; } _scopeState;
}

@property (nonatomic) unsigned int assertionID;
@property (copy, nonatomic) id /* block */ testingQueueCallback;
@property (retain, nonatomic) NSLocale *localeOverride;
@property (retain, nonatomic) NSDate *dateOverride;
@property (readonly, nonatomic) BOOL isCurrentlyOutputting;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)dealloc;
- (void)addObserver:(id)a0;
- (void)_updateHapticPatternsIfNecessary:(BOOL)a0;
- (void)_updateIs24HourTime;
- (void)_cleanupHapticsDict;
- (void)_clearQueue;
- (id)_atomToLegacyVibePattern:(id)a0;
- (BOOL)_is24HourTime;
- (id)_dateComponentsForClockTime;
- (long long)_numberOfTapsForHourNumber:(long long)a0 withEncoding:(long long)a1;
- (BOOL)_startPowerAssertion;
- (void)_stopPowerAssertion;
- (BOOL)_preStartCheck;
- (void)_handleTestingQueueCallback;
- (void)_dequeueSound;
- (void)_informObserversDidStart;
- (long long)_numberOfTapHoursForClockTimeWithEncoding:(long long)a0;
- (void)_enqueueHours:(unsigned long long)a0 encoding:(long long)a1;
- (long long)_numberOfTapMinutesForClockTime;
- (void)_enqueueMinutes:(unsigned long long)a0 encoding:(long long)a1;
- (void)_outputWithEnqueueBlock:(id /* block */)a0;
- (id)_convertSoundToStringName:(unsigned int)a0;
- (void)_informObserversDidStop;
- (void)_informObserversDidOutputSSID:(long long)a0;
- (void)_informObserversWillOutputSSID:(long long)a0 hapticsDescriptions:(id)a1;
- (void)outputHoursAndMinutes:(long long)a0;
- (void)outputHours:(long long)a0;
- (void)outputMinutes:(long long)a0;
- (void)stopCurrentOutput;
- (void)_localeDidChange:(id)a0;

@end
