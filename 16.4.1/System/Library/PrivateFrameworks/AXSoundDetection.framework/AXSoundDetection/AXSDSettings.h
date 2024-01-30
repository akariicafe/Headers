@class NSArray, NSMutableDictionary, NSData, NSString;

@interface AXSDSettings : HCSettings

@property (nonatomic) BOOL ultronSupportEnabled;
@property (nonatomic) BOOL ultronIsRunning;
@property (nonatomic) long long soundDetectionState;
@property (readonly, nonatomic) BOOL soundDetectionEnabled;
@property (retain, nonatomic) NSArray *enabledSoundDetectionTypes;
@property (retain, nonatomic) NSMutableDictionary *soundDetectionSnoozeDictionary;
@property (readonly, nonatomic) NSArray *supportedSoundDetectionTypes;
@property (readonly, nonatomic) NSData *kShotDetectors;
@property (readonly, nonatomic) NSArray *enabledKShotDetectorIdentifiers;
@property (readonly, nonatomic) NSMutableDictionary *kShotSoundRecordings;
@property (nonatomic) long long soundDetectionKShotListeningState;
@property (nonatomic) BOOL kShotShouldSaveCurrentSound;
@property (nonatomic) BOOL isActivelyTrainingAKShotModel;
@property (nonatomic) BOOL micDisabled;
@property (readonly, nonatomic) NSString *pipedInFile;

+ (id)sharedInstance;
+ (void)initialize;
+ (id)stringForSoundDetectionState:(long long)a0;

- (id)keysToSync;
- (id)preferenceDomainForPreferenceKey:(id)a0;
- (void)logMessage:(id)a0;
- (id)preferenceKeyForSelector:(SEL)a0;
- (BOOL)shouldStoreLocally;
- (id)localizedNameForSoundDetectionType:(id)a0;
- (id)supportedSoundDetectionTypes;
- (void)setMicDisabled:(BOOL)a0;
- (void)addSoundDetectionType:(id)a0;
- (id)enabledKShotDetectorIdentifiers;
- (void)setKShotShouldSaveCurrentSound:(BOOL)a0;
- (void)setPipedInFile:(id)a0;
- (void)addSnoozeDateToSnoozeDictionary:(id)a0 forKey:(id)a1;
- (BOOL)ultronIsRunning;
- (id)enabledSoundDetectionTypes;
- (BOOL)hasCustomHapticForDetector:(id)a0;
- (BOOL)hasCustomToneForDetector:(id)a0;
- (BOOL)isActivelyTrainingAKShotModel;
- (id)kShotDetectors;
- (BOOL)kShotShouldSaveCurrentSound;
- (id)kShotSoundRecordings;
- (BOOL)micDisabled;
- (void)pipeFile:(id)a0;
- (id)pipedInFile;
- (void)removeAllSoundDetectionTypes;
- (void)removeSoundDetectionType:(id)a0;
- (void)setEnabledKShotDetectorIdentifiers:(id)a0;
- (void)setEnabledSoundDetectionTypes:(id)a0;
- (void)setIsActivelyTrainingAKShotModel:(BOOL)a0;
- (void)setKShotDetectors:(id)a0;
- (void)setKShotSoundRecordings:(id)a0;
- (void)setSoundDetectionKShotListeningState:(long long)a0;
- (void)setSoundDetectionSnoozeDictionary:(id)a0;
- (void)setSoundDetectionState:(long long)a0;
- (void)setSupportedSoundDetectionTypes:(id)a0;
- (void)setUltronIsRunning:(BOOL)a0;
- (void)setUltronSupportEnabled:(BOOL)a0;
- (id)sortedSupportedSoundDetectionTypes;
- (id)soundAlertTopicForSoundDetectionType:(id)a0;
- (long long)soundDetectionKShotListeningState;
- (id)soundDetectionSnoozeDictionary;
- (long long)soundDetectionState;
- (BOOL)ultronSupportEnabled;

@end
