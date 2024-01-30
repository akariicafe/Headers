@interface VNObjectTrackerRevision2 : VNObjectTracker

+ (id)serializeRPNTrackingQueue;
+ (id)serializeRPNInitializationQueue;
+ (id)rpnTrackQueue;
+ (id)rpnInitQueue;
+ (id)rpnTrackEspressoResourcesCacheManager;
+ (id)rpnInitEspressoResourcesCacheManager;
+ (id)rpnTrackerInitProcessingQueueName;
+ (id)rpnTrackerTrackProcessingQueueName;
+ (id)rpnTrackerInitModelName;
+ (id)rpnTrackerTrackModelName;

- (id)initWithOptions:(id)a0 error:(id *)a1;

@end
