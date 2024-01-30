@class NSString, NSMutableDictionary, NSData, PLAgent, NSNumber, PLMAVBBHardwareMessage;

@interface PLMAVBBMetric : NSObject

@property (retain) NSString *notifyTitle;
@property (retain) NSNumber *aPeriodicTriggerCnt;
@property (retain) NSNumber *aPeriodicProfileId;
@property (retain) NSData *aPeriodicTriggerPayload;
@property (retain) NSMutableDictionary *prodMetrics;
@property (retain) PLMAVBBHardwareMessage *storeMetricsLogger;
@property (retain) PLAgent *logAgent;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)initializeDataStoreBBTS:(id)a0 triggerCnt:(id)a1 triggerId:(id)a2;
- (void)initializeMetricsDictWithTS:(id)a0 triggerCnt:(id)a1 triggerId:(id)a2;
- (void)modelProdMetricsNotify;
- (void)queueAperiodicMetricId:(id)a0 payload:(id)a1 profileId:(id)a2;
- (void)queuePeriodicMetricId:(id)a0 payload:(id)a1 forTrigger:(id)a2;
- (BOOL)registerForNotifClient:(id)a0 andProfile:(id)a1;

@end
