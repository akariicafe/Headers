@class NSHashTable, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface HFUpdateLoggerDebuggingController : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSHashTable *_queue_runningLoggers;
@property (retain, nonatomic) NSMutableDictionary *_queue_historyStringsKeyedByLogger;
@property (nonatomic) long long _queue_iteration;

+ (id)_sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)_runningLoggers;
- (id)_historyStrings;
- (void)_addRunningLogger:(id)a0;
- (void)_removeRunningLogger:(id)a0;
- (id)_runningLoggerStrings;

@end
