@class NSMutableDictionary;

@interface HFAccessorySettingFormatterFactory : NSObject

@property (retain, nonatomic) NSMutableDictionary *formattersForKey;

+ (id)defaultFactory;
+ (id)_siriRecognitionLanguageFormatter;
+ (id)_siriOutputVoiceFormatter;
+ (id)_siriPersonalRequestsFormatter;
+ (id)_announceEnabledFormatter;
+ (id)_doorbellChimeEnabledFormatter;

- (id)init;
- (void).cxx_destruct;
- (id)formatterForKey:(id)a0;
- (id)_buildFormatterForKey:(id)a0;
- (id)formatterForKey:(id)a0 copy:(BOOL)a1;

@end
