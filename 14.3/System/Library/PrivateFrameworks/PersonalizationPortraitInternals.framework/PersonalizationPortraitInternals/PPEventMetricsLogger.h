@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface PPEventMetricsLogger : NSObject <NSSecureCoding> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    NSString *_path;
    NSMutableArray *_loggedInteractionsSummary;
    NSObject<OS_dispatch_source> *_persistenceTimerSource;
    NSObject<OS_dispatch_queue> *_interactionsWriteQueue;
    double _storeCreationDate;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)defaultLogger;
+ (unsigned long long)numberOfDaysBetweenDate:(id)a0 andDate:(id)a1;

- (void)logEventInteractionForEventWithEventIdentifier:(id)a0 interface:(unsigned short)a1 actionType:(unsigned short)a2;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (BOOL)resetLogs;
- (double)_storeAge;
- (id)initWithFileName:(id)a0;
- (void)updateAndScheduleDiskWrite;
- (void)sendRTCLogsWithCompletion:(id /* block */)a0;
- (void)encodeWithCoder:(id)a0;
- (void)logNewInteractionSummaryWithDictionary:(id)a0;
- (id)logsToSend;
- (id)_createRTCReporting;
- (BOOL)storeToDisk;
- (id)_descriptionForInterface:(unsigned short)a0;
- (id)_descriptionForActionType:(unsigned short)a0;
- (id)eventsAndExtraordinaryEventsDictFromDate:(id)a0;
- (BOOL)_removeInteractionsSummaryLogsFromLogsAndResetStoreAge:(id)a0;
- (id)allowedLogFromLog:(id)a0;
- (void)logEventInteractionForEventHighlight:(id)a0 interface:(unsigned short)a1 actionType:(unsigned short)a2;
- (BOOL)_incrementInteractionForEventIdentifier:(id)a0 interface:(unsigned short)a1 actionType:(unsigned short)a2;
- (id)_interactionAttributesForEventHighlight:(id)a0;
- (id)_interactionKeyForInterface:(unsigned short)a0 actionType:(unsigned short)a1;
- (id)_descriptionForPPRTCCategory:(unsigned short)a0;
- (id)loggedInteractionsSummaryMetrics;

@end
