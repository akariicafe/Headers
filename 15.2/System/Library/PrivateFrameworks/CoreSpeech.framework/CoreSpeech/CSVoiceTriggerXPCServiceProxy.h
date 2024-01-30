@class CSSiriAssertionMonitor, NSMutableSet, NSHashTable;

@interface CSVoiceTriggerXPCServiceProxy : NSObject

@property (retain, nonatomic) NSMutableSet *activationAssertions;
@property (nonatomic) BOOL isPhraseSpotterBypassed;
@property (nonatomic) BOOL isRaiseToSpeakBypassed;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) CSSiriAssertionMonitor *assertionMonitor;

+ (id)sharedInstance;

- (void)setRaiseToSpeakBypassing:(BOOL)a0 timeout:(double)a1;
- (void)registerObserver:(id)a0;
- (void)enableVoiceTrigger:(BOOL)a0 withAssertion:(id)a1 timestamp:(double)a2;
- (void)setPhraseSpotterBypassing:(BOOL)a0 timeout:(double)a1;
- (void)notifyServiceConnectionLost;
- (void).cxx_destruct;
- (id)init;
- (void)notifyVoiceTriggeredSiriSessionCancelled;
- (void)unregisterObserver:(id)a0;
- (id)fetchVoiceTriggerStats;
- (id)_fetchAssertionMonitor;
- (id)initWithAssertionMonitor:(id)a0;

@end
