@class PPConnectionsFoundInAppsSource, PPConnectionsPasteboardSource, PPConnectionsMetricsTracker, PPConnectionsCalendarSource, PPConnectionsNamedEntitySource, PPConnectionsDuetSource, NSObject, PPConnectionsParameters;
@protocol OS_dispatch_queue;

@interface PPConnectionsPredictionStore : NSObject {
    PPConnectionsParameters *_parameters;
    PPConnectionsPasteboardSource *_pasteboardSource;
    PPConnectionsCalendarSource *_calendarSource;
    PPConnectionsDuetSource *_duetSource;
    PPConnectionsNamedEntitySource *_namedEntitySource;
    PPConnectionsFoundInAppsSource *_fiaSource;
    PPConnectionsMetricsTracker *_metricsTracker;
    NSObject<OS_dispatch_queue> *_predictionQueue;
}

+ (id)defaultStore;

- (id)parameters;
- (id)init;
- (id)cutoffLocationAppLastUseTime;
- (void).cxx_destruct;
- (id)initWithParameters:(id)a0 pasteboardSource:(id)a1 calendarSource:(id)a2 duetSource:(id)a3 namedEntitySource:(id)a4 fiaSource:(id)a5 metricsTracker:(id)a6;
- (id)pasteboardSource;
- (id)cutoffLinguisticTriggerTime;
- (id)duetSource;
- (void)_asyncFillLocationData:(id)a0 group:(id)a1 source:(id)a2 consumer:(unsigned long long)a3 criteria:(id)a4 earliestDate:(id)a5 latestDate:(id)a6 limit:(unsigned long long)a7 explanationSet:(id)a8;
- (id)calendarSource;
- (id)cutoffPasteboardItemTime;
- (id)recentLocationsForConsumer:(unsigned long long)a0 criteria:(id)a1 limit:(unsigned long long)a2 explanationSet:(id)a3 timeout:(unsigned long long)a4 error:(id *)a5;
- (id)cutoffActivityTime;
- (id)cutoffCalendarEventTime;
- (id)cutoffNamedEntityTime;

@end
