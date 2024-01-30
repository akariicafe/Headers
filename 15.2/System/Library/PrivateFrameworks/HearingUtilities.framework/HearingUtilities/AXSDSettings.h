@class NSArray, NSMutableDictionary, NSString;

@interface AXSDSettings : HCSettings

@property (nonatomic) BOOL ultronSupportEnabled;
@property (nonatomic) BOOL ultronIsRunning;
@property (nonatomic) int soundDetectionState;
@property (readonly, nonatomic) BOOL soundDetectionEnabled;
@property (retain, nonatomic) NSArray *enabledSoundDetectionTypes;
@property (retain, nonatomic) NSMutableDictionary *soundDetectionSnoozeDictionary;
@property (readonly, nonatomic) NSArray *supportedSoundDetectionTypes;
@property (nonatomic) BOOL micDisabled;
@property (readonly, nonatomic) NSString *pipedInFile;

+ (id)sharedInstance;
+ (void)initialize;
+ (id)stringForSoundDetectionState:(int)a0;

- (id)preferenceDomain;
- (id)soundDetectionSnoozeDictionary;
- (void)addSnoozeDateToSnoozeDictionary:(id)a0 forKey:(id)a1;
- (id)localizedNameForSoundDetectionType:(id)a0;
- (id)preferenceKeyForSelector:(SEL)a0;
- (BOOL)micDisabled;
- (void)pipeFile:(id)a0;
- (id)pipedInFile;
- (void)setSoundDetectionSnoozeDictionary:(id)a0;
- (id)supportedSoundDetectionTypes;
- (void)setUltronIsRunning:(BOOL)a0;
- (id)soundAlertTopicForSoundDetectionType:(id)a0;
- (void)addSoundDetectionType:(id)a0;
- (id)sortedSupportedSoundDetectionTypes;
- (void)setSupportedSoundDetectionTypes:(id)a0;
- (void)setEnabledSoundDetectionTypes:(id)a0;
- (id)enabledSoundDetectionTypes;
- (void)setPipedInFile:(id)a0;
- (BOOL)hasCustomHapticForDetector:(id)a0;
- (BOOL)ultronSupportEnabled;
- (void)setMicDisabled:(BOOL)a0;
- (void)setSoundDetectionState:(int)a0;
- (BOOL)hasCustomToneForDetector:(id)a0;
- (int)soundDetectionState;
- (void)logMessage:(id)a0;
- (BOOL)ultronIsRunning;
- (void)setUltronSupportEnabled:(BOOL)a0;
- (id)keysToSync;
- (void)removeSoundDetectionType:(id)a0;
- (void)removeAllSoundDetectionTypes;
- (BOOL)shouldStoreLocally;

@end
