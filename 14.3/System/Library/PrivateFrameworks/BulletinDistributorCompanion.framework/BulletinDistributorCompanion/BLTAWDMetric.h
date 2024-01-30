@class AWDMetricContainer, PBCodable;

@interface BLTAWDMetric : NSObject {
    AWDMetricContainer *_metricContainer;
}

@property (readonly, retain, nonatomic) PBCodable *metric;

+ (id)metricForDelayWithID:(unsigned int)a0 class:(Class)a1 sectionID:(id)a2 publisherMatchID:(id)a3 companionPublicationDate:(id)a4 isGizmoDate:(BOOL)a5 startTime:(id)a6 now:(id)a7;
+ (id)metricForDelayWithID:(unsigned int)a0 class:(Class)a1;
+ (id)metricForDelayWithID:(unsigned int)a0 class:(Class)a1 sectionID:(id)a2 publisherMatchID:(id)a3 companionPublicationDate:(id)a4 startTime:(id)a5 now:(id)a6 connectionStatus:(unsigned long long)a7 hasPublicationDate:(BOOL)a8;
+ (id)metricForDelayWithID:(unsigned int)a0 class:(Class)a1 sectionID:(id)a2 publisherMatchID:(id)a3 companionPublicationDate:(id)a4 startTime:(id)a5 now:(id)a6;
+ (id)metricForDelayWithID:(unsigned int)a0 class:(Class)a1 sectionID:(id)a2 publisherMatchID:(id)a3 companionPublicationDate:(id)a4 startTime:(id)a5 now:(id)a6 connectionStatus:(unsigned long long)a7;
+ (void)submitMetricForDelayWithID:(unsigned int)a0 class:(Class)a1 startTime:(id)a2;
+ (void)submitMetricForDelayWithID:(unsigned int)a0 class:(Class)a1 sectionID:(id)a2 publisherMatchID:(id)a3 companionPublicationDate:(id)a4 startTime:(id)a5;
+ (void)submitMetricForDelayWithID:(unsigned int)a0 class:(Class)a1 sectionID:(id)a2 publisherMatchID:(id)a3 companionPublicationDate:(id)a4 isGizmoDate:(BOOL)a5 startTime:(id)a6;
+ (void)submitMetricForDelayWithID:(unsigned int)a0 class:(Class)a1 sectionID:(id)a2 publisherMatchID:(id)a3 companionPublicationDate:(id)a4 startTime:(id)a5 connectionStatus:(unsigned long long)a6;
+ (void)submitMetricForDelayWithID:(unsigned int)a0 class:(Class)a1 sectionID:(id)a2 publisherMatchID:(id)a3 companionPublicationDate:(id)a4 startTime:(id)a5 connectionStatus:(unsigned long long)a6 hasPublicationDate:(BOOL)a7;
+ (void)submitMetricForDelayAckFromSecondaryDeviceWithSectionID:(id)a0 publisherMatchID:(id)a1 companionPublicationDate:(id)a2 startTime:(id)a3 connectionStatus:(unsigned long long)a4 origConnectionStatus:(unsigned long long)a5 timedOut:(BOOL)a6;
+ (void)submitMetricForDelayToSyncWithStartTime:(id)a0 initial:(BOOL)a1;

- (void).cxx_destruct;
- (void)_submit;
- (id)initWithMetricID:(unsigned int)a0 class:(Class)a1;
- (void)_setDelayFrom:(id)a0 to:(id)a1;

@end
