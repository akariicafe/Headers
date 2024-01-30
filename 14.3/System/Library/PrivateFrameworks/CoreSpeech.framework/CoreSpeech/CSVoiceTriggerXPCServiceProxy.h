@class NSMutableSet, NSHashTable;

@interface CSVoiceTriggerXPCServiceProxy : NSObject

@property (retain, nonatomic) NSMutableSet *activationAssertions;
@property (nonatomic) BOOL isPhraseSpotterBypassed;
@property (nonatomic) BOOL isRaiseToSpeakBypassed;
@property (retain, nonatomic) NSHashTable *observers;

+ (id)sharedInstance;

- (void)setRaiseToSpeakBypassing:(BOOL)a0 timeout:(double)a1;
- (void)registerObserver:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)notifyServiceConnectionLost;
- (void)setPhraseSpotterBypassing:(BOOL)a0 timeout:(double)a1;
- (void)enableVoiceTrigger:(BOOL)a0 withAssertion:(id)a1 timestamp:(double)a2;
- (void)unregisterObserver:(id)a0;
- (void)notifyVoiceTriggeredSiriSessionCancelled;
- (id)fetchVoiceTriggerStats;

@end
