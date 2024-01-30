@class NSString, NSArray, CSVoiceTriggerAirPodWearerDetectionConfig;

@interface CSVoiceTriggerSecondPassConfig : NSObject

@property (readonly, nonatomic) float preTriggerAudioTime;
@property (readonly, nonatomic) float prependingAudioTime;
@property (readonly, nonatomic) float trailingAudioTime;
@property (readonly, nonatomic) NSString *resourcePath;
@property (readonly, nonatomic) NSString *configPathNDAPI;
@property (readonly, nonatomic) BOOL useRecognizerCombination;
@property (readonly, nonatomic) NSString *configPathRecognizer;
@property (readonly, nonatomic) BOOL useKeywordSpotting;
@property (readonly, nonatomic) NSArray *phraseConfigs;
@property (readonly, nonatomic) CSVoiceTriggerAirPodWearerDetectionConfig *wearerDetectionConfig;

- (void).cxx_destruct;
- (id)initWithPreTriggerAudioTime:(float)a0 prependingAudioTime:(float)a1 trailingAudioTime:(float)a2 resourcePath:(id)a3 configPathNDAPI:(id)a4 useRecognizerCombination:(BOOL)a5 configPathRecognizer:(id)a6 useKeywordSpotting:(BOOL)a7 phraseConfigs:(id)a8 wearerDetectionConfig:(id)a9;

@end
