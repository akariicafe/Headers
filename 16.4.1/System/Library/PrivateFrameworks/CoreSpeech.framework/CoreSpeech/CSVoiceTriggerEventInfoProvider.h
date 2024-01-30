@class NSDictionary, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CSVoiceTriggerEventInfoProvider : NSObject {
    NSMutableDictionary *_accessoryVoiceTriggerEvents;
    NSDictionary *_builtInVoiceTriggerEvent;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (copy, nonatomic) NSDictionary *rtsTriggerInfo;
@property (nonatomic) unsigned long long triggerNotifiedMachTime;

+ (id)sharedInstance;
+ (BOOL)isVoiceTriggerInfoAvailableLocally:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_isBuiltInDeviceFromDeviceId:(id)a0;
- (void)fetchVoiceTriggerInfoWithAudioContext:(id)a0 triggerInfoProviding:(id)a1 resultVoiceTriggerInfo:(id *)a2 resultRTSTriggerInfo:(id *)a3;
- (void)setVoiceTriggerInfo:(id)a0 deviceId:(id)a1;

@end
