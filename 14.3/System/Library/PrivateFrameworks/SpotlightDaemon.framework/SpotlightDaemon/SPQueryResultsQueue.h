@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface SPQueryResultsQueue : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) struct __SIResultQueue { } *siResultsQueue;
@property (retain, nonatomic) NSMutableDictionary *jobs;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) long long pausedCount;
@property (nonatomic) BOOL canceled;
@property (nonatomic) BOOL tracked;
@property (nonatomic) BOOL live;
@property (nonatomic) BOOL shared;
@property (readonly) BOOL hasPausedResults;

+ (id)sharedInstanceDispatchQueue:(id)a0;
+ (void)startTrackingResultsQueue:(id)a0;
+ (void)stopTrackingResultsQueueWithIdentifier:(id)a0;
+ (id)findResultsQueueWithIdentifier:(id)a0;

- (void)cancel;
- (void)_startTracking;
- (void).cxx_destruct;
- (void)dealloc;
- (void)resumeResults;
- (void)pauseResults;
- (void)cancelJob:(id)a0;
- (id)initWithIdentifier:(id)a0 dispatchQueue:(id)a1;
- (void)_scheduleWakeupForced:(BOOL)a0;
- (void)_stopTracking;
- (void)_processResults;
- (void)addJob:(id)a0;

@end
