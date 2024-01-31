@class NSUUID, NSString, NSMutableArray, __CFN_TransactionMetrics;

@interface __CFN_TaskMetrics : NSObject <NSSecureCoding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _ignoreNextRedirection;
    int _pidForHAR;
    NSUUID *_UUID;
    unsigned long long _identifier;
    NSMutableArray *_transactionMetrics;
    double _createTime;
    double _firstResumeTime;
    double _completeTime;
    long long _options;
    NSString *_sourceApplicationBundleIdentifier;
    long long _schedulingTier;
    __CFN_TransactionMetrics *_currentTransactionMetrics;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSMutableArray *_daemon_transactionMetrics;
@property (readonly) __CFN_TransactionMetrics *_daemon_currentTransactionMetrics;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
