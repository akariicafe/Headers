@class SSXPCConnection, NSObject, SSMetricsConfiguration;
@protocol OS_dispatch_queue;

@interface SSMetricsController : NSObject {
    SSXPCConnection *_connection;
    SSMetricsConfiguration *_configuration;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_flushSerialQueue;
    BOOL _flushOnForeground;
    id /* block */ _flushTimerBlock;
    NSObject<OS_dispatch_queue> *_flushTimerQueue;
}

@property (nonatomic, getter=isFlushTimerEnabled) BOOL flushTimerEnabled;

- (void)_applicationWillEnterForeground;
- (BOOL)isDisabled;
- (id)_connection;
- (void)flushUnreportedEventsWithCompletionHandler:(id /* block */)a0;
- (id)configuration;
- (id)serialQueue;
- (void)recordAnalyticsForMetricsDialogEvent:(id)a0 withTopic:(id)a1;
- (void)setGlobalConfiguration:(id)a0;
- (id)_userType;
- (void)_setupFlushTimer;
- (id)_cookieValuesForConfiguration:(id)a0;
- (void)_flushUnreportedEventsIfEnabled;
- (void)_handleFlushTimer;
- (void)insertEvents:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)_enumerateFieldValuesWithMap:(id)a0 fieldData:(id)a1 block:(id /* block */)a2;
- (id)_valueForField:(id)a0 withFieldData:(id)a1;
- (void)insertEvent:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)locationWithPosition:(long long)a0 type:(id)a1 fieldData:(id)a2;
- (void)setPageConfiguration:(id)a0;
- (id)pingURLs;
- (void).cxx_destruct;
- (id)init;
- (void)_serialQueueInsertEvents:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)dealloc;

@end
