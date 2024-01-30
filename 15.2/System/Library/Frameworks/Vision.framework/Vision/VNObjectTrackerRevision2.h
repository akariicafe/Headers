@class NSString;

@interface VNObjectTrackerRevision2 : VNObjectTracker

@property (class, readonly, copy) NSString *rpnTrackerInitModelName;
@property (class, readonly, copy) NSString *rpnTrackerTrackModelName;

+ (id)serializeRPNTrackingQueue;
+ (id)serializeRPNInitializationQueue;
+ (id)rpnTrackQueue;
+ (id)rpnInitQueue;
+ (id)rpnTrackerInitProcessingQueueName;
+ (id)rpnTrackerTrackProcessingQueueName;

- (id)initWithOptions:(id)a0 error:(id *)a1;

@end
