@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CSDarwinVoiceTriggerEventInfoProvider : NSObject

@property (retain, nonatomic) NSMutableDictionary *triggerInfos;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedInstance;
+ (id)voiceTriggerEventInfoWithAdjustedMachTime:(id)a0 deviceUUID:(id)a1 anchorHostMachTime:(unsigned long long)a2 anchorDarwinMachTime:(unsigned long long)a3;

- (id)init;
- (void).cxx_destruct;
- (id)getMachTimeAdjustedVoiceTriggerEventInfoForDeviceUUID:(id)a0;
- (void)setRawVoiceTriggerEventInfo:(id)a0 fromDeviceUUID:(id)a1 anchorHostMachTime:(unsigned long long)a2 anchorDarwinMachTime:(unsigned long long)a3;

@end
