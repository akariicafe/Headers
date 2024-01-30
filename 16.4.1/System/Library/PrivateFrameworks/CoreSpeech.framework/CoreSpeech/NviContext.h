@class NSDictionary, NSString;

@interface NviContext : NSObject

@property (retain, nonatomic) NSDictionary *voiceTriggerInfo;
@property (nonatomic) BOOL requestHistoricalAudio;
@property (nonatomic) unsigned long long reqStartAudioSampleId;
@property (nonatomic) unsigned long long reqStartMachAbsTime;
@property (nonatomic) BOOL shouldLogRawSensorData;
@property (retain, nonatomic) NSString *rootLogDir;

- (id)description;
- (void).cxx_destruct;

@end
