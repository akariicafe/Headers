@class NSString;

@interface VNObjectTrackerRevision2 : VNObjectTracker

@property (class, readonly, copy) NSString *rpnTrackerInitModelName;
@property (class, readonly, copy) NSString *rpnTrackerTrackModelName;

+ (id)rpnInitQueue;
+ (id)rpnTrackerTrackProcessingQueueName;
+ (id)rpnTrackerInitProcessingQueueName;
+ (id)serializeRPNTrackingQueue;
+ (id)serializeRPNInitializationQueue;
+ (id)rpnTrackQueue;

- (id)initWithOptions:(id)a0 error:(id *)a1;

@end
