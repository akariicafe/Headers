@class NSString, NSDictionary, NSUUID, CSVoiceTriggerFirstPassMetrics;

@interface CSVoiceTriggerSecondPassRequestOption : NSObject

@property (readonly, nonatomic) unsigned long long firstPassSource;
@property (readonly, nonatomic) NSString *deviceId;
@property (readonly, nonatomic) NSString *audioProviderUUID;
@property (readonly, nonatomic) NSDictionary *firstPassTriggerInfo;
@property (readonly, nonatomic) NSUUID *rejectionMHUUID;
@property (readonly, nonatomic) BOOL isSecondChanceRun;
@property (readonly, nonatomic) CSVoiceTriggerFirstPassMetrics *firstpassMetrics;

- (void).cxx_destruct;
- (id)initWithFirstPassSource:(unsigned long long)a0 deviceId:(id)a1 audioProviderUUID:(id)a2 firstPassInfo:(id)a3 rejectionMHUUID:(id)a4 isSecondChanceRun:(BOOL)a5 firstpassMetrics:(id)a6;

@end
