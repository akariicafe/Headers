@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CSRemoraVoiceTriggerEventInfoProvider : NSObject

@property (retain, nonatomic) NSMutableDictionary *eventInfos;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)setVoiceTriggerEventInfo:(id)a0 endpointId:(id)a1;
- (id)getVoiceTriggerEventInfoForEndpointId:(id)a0;

@end
