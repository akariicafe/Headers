@class NSDictionary;

@interface CSVoiceTriggerEventInfoProvider : NSObject

@property (copy, nonatomic) NSDictionary *voiceTriggerInfo;
@property (copy, nonatomic) NSDictionary *rtsTriggerInfo;
@property (nonatomic) unsigned long long triggerNotifiedMachTime;

+ (id)sharedInstance;

- (void).cxx_destruct;

@end
