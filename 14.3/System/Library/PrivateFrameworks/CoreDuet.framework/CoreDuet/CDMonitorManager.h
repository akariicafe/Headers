@class NSObject, NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CDMonitorManager : NSObject {
    NSMutableDictionary *_monitors;
    NSMutableSet *_lazyMonitorNames;
    id /* block */ _generalInstantHandler;
    id /* block */ _generalHistoricalHandler;
    id /* block */ _generalHistoricalDeletingHandler;
    id /* block */ _generalShutdownHandler;
    NSMutableDictionary *_instantHandlerMap;
    NSMutableDictionary *_historicalHandlerMap;
    NSMutableSet *_shutdownHandlingMonitors;
    NSObject<OS_dispatch_queue> *_monitorWorkQueue;
    NSObject<OS_dispatch_source> *_SIGTERMHandlerSource;
}

+ (id)monitorManagerForEventStreams:(id)a0 domain:(unsigned long long)a1;

- (void)setInstantHandler:(id /* block */)a0;
- (BOOL)_hasMonitorForStreamName:(id)a0;
- (void)deliverNotificationEvent:(id)a0;
- (void).cxx_destruct;
- (void)setShutdownHandler:(id /* block */)a0;
- (void)loadMonitorManagers;
- (id)_monitorForStreamName:(id)a0;
- (void)_setHistoricalHandler:(id /* block */)a0 forStreamName:(id)a1;
- (void)_addMonitor:(id)a0 forStreamName:(id)a1;
- (void)stop;
- (id)currentEvent;
- (void)update;
- (void)_updateForStreamName:(id)a0;
- (void)removeMonitor:(id)a0;
- (void)_startMonitorForStreamName:(id)a0;
- (void)startMonitorForStream:(id)a0;
- (void)handleShutdownNotification;
- (id)_allStreamNames;
- (id)_lastUpdateForStreamName:(id)a0;
- (void)setHistoricalDeletingHandler:(id /* block */)a0;
- (void)_setInstantHandler:(id /* block */)a0 forStreamName:(id)a1;
- (id)lastUpdate;
- (id)initWithEventStreams:(id)a0 domain:(unsigned long long)a1;
- (BOOL)hasMonitor:(id)a0;
- (id)_currentEventForStreamName:(id)a0;
- (id)lastUpdateForStream:(id)a0;
- (void)populateCurrentValueForStreamName:(id)a0;
- (void)start;
- (void)_stopMonitorForStreamName:(id)a0;
- (void)setInstantHandler:(id /* block */)a0 forStream:(id)a1;
- (void)updateForStream:(id)a0;
- (void)setHistoricalHandler:(id /* block */)a0 forStream:(id)a1;
- (void)addMonitor:(id)a0;
- (void)setHistoricalHandler:(id /* block */)a0;
- (void)stopMonitorForStream:(id)a0;
- (void)_removeMonitorForStreamName:(id)a0;
- (id)currentEventForStream:(id)a0;
- (id)_allMonitors;

@end
