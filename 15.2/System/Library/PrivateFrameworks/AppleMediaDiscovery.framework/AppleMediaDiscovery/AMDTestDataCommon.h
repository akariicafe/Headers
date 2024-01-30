@interface AMDTestDataCommon : NSObject

+ (id)getSampleEvent;
+ (id)getNonAggregationDescriptor;
+ (id)getAggregationDescriptorDict;
+ (id)getSaveConfigDownloadModelPayload;
+ (id)getRefreshServerTasteProfilePayload;
+ (id)getInferencePayload;
+ (id)getSampleEventInstalls;
+ (id)getSampleEventUninstall;
+ (id)getSampleEventCrashes;
+ (id)getSampleEventLaunches;
+ (id)getEventPayload:(id)a0;
+ (id)gettabInfoDict;
+ (id)getRefreshOnDeviceTasteProfilePayload;
+ (id)getGetModelIDPayload;
+ (id)getSampleWorkflow;

@end
