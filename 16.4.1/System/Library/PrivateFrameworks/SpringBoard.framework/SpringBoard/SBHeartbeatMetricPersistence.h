@class NSCalendar, NSDictionary, NSURL, NSISO8601DateFormatter, NSObject, NSMutableDictionary;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SBHeartbeatMetricPersistence : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSCalendar *_queue_calendar;
    NSISO8601DateFormatter *_queue_dateFormatter;
    NSMutableDictionary *_queue_metricsByDatestamp;
    NSObject<OS_dispatch_source> *_queue_persistenceTimer;
}

@property (class, readonly, copy, nonatomic) NSURL *defaultPersistenceURL;

@property (readonly, copy, nonatomic) NSURL *persistenceURL;
@property (readonly, nonatomic) double persistenceDelay;
@property (readonly, nonatomic) double persistenceLeeway;
@property (readonly, copy, nonatomic) NSDictionary *metricsByDatestamp;

- (id)initWithPersistenceURL:(id)a0 persistenceDelay:(double)a1 persistenceLeeway:(double)a2;
- (BOOL)_queue_writeToPersistenceURL;
- (void)trackInteractionWithFeatureNamed:(id)a0 duration:(double)a1;
- (void)trackInteractionWithFeatureNamed:(id)a0;
- (void)_queue_scheduleWriteIfNeeded;
- (id)init;
- (void)migrateDataFromDefaultsIfNeeded:(id)a0;
- (void).cxx_destruct;
- (void)_queue_initializeIfNeeded;

@end
