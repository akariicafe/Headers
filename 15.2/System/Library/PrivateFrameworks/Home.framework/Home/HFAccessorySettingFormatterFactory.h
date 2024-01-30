@class NSMutableDictionary;

@interface HFAccessorySettingFormatterFactory : NSObject

@property (retain, nonatomic) NSMutableDictionary *formattersForKey;

+ (id)defaultFactory;
+ (id)_allowHeySiriFormatter;
+ (id)_siriRecognitionLanguageFormatter;
+ (id)_siriOutputVoiceFormatter;
+ (id)_siriPersonalRequestsFormatter;
+ (id)_announceEnabledFormatter;
+ (id)_doorbellChimeEnabledFormatter;

- (void).cxx_destruct;
- (id)init;
- (id)formatterForKey:(id)a0;
- (id)_buildFormatterForKey:(id)a0;
- (id)formatterForKey:(id)a0 copy:(BOOL)a1;

@end
