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

- (void)sendRTCLogsWithCompletion:(id /* block */)a0;
- (void)encodeWithCoder:(id)a0;
- (void)logEventInteractionForEventWithEventIdentifier:(id)a0 interface:(unsigned short)a1 actionType:(unsigned short)a2;
- (void).cxx_destruct;
- (id)init;
- (void)logEventInteractionForEventHighlight:(id)a0 interface:(unsigned short)a1 actionType:(unsigned short)a2;
- (id)initWithCoder:(id)a0;
- (void)dealloc;

@end
