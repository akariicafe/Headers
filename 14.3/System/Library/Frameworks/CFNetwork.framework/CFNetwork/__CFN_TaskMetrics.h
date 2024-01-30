@class NSUUID, __CFN_SessionMetrics, NSMutableArray, __CFN_TransactionMetrics;

@interface __CFN_TaskMetrics : NSObject <NSSecureCoding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _completed;
    BOOL _ignoreNextRedirection;
    __CFN_SessionMetrics *_sessionMetrics;
    NSUUID *_UUID;
    unsigned long long _identifier;
    NSMutableArray *_transactionMetrics;
    double _createTime;
    double _firstResumeTime;
    double _completeTime;
    long long _options;
    long long _schedulingTier;
    __CFN_TransactionMetrics *_currentTransactionMetrics;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableArray *_daemon_transactionMetrics;
@property (retain) __CFN_TransactionMetrics *_daemon_currentTransactionMetrics;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
