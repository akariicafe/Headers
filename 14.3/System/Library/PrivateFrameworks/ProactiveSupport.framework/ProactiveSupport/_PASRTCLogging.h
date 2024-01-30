@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_source;

@interface _PASRTCLogging : NSObject <NSSecureCoding> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    NSString *_path;
    NSObject<OS_dispatch_source> *_persistenceTimerSource;
    double _storeCreationDate;
    NSMutableArray *_aggregators;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSMutableArray *logQueue;

+ (id)loggerForPath:(id)a0;
+ (unsigned long long)numberOfDaysBetweenDate:(id)a0 andDate:(id)a1;
+ (id)dateByAppendingDaysToCurrentDate:(double)a0;
+ (double)round:(double)a0 toSignificantFigures:(long long)a1;
+ (unsigned long long)bucketizeInteger:(unsigned long long)a0 withBucketSize:(unsigned long long)a1 limit:(unsigned long long)a2;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (BOOL)resetLogs;
- (double)_storeAge;
- (id)initWithFileName:(id)a0;
- (BOOL)_storeToDisk;
- (id)_createRTCReportingWithClientName:(id)a0 serviceName:(id)a1 assetVersion:(unsigned long long)a2;
- (void)enqueueRTCLog:(id)a0 category:(unsigned short)a1 type:(unsigned short)a2;
- (void)registerBeforeSendProcessor:(id)a0;
- (void)expireLogs;
- (void)logAggregateEvent:(id)a0 category:(unsigned short)a1 type:(unsigned short)a2;
- (void)sendRTCLogsWithClientName:(id)a0 serviceName:(id)a1 assetVersion:(unsigned long long)a2 completion:(id /* block */)a3;
- (BOOL)_removeSentLogsAndResetStoreAge:(id)a0;
- (id)whitelistedLogFromLog:(id)a0;
- (void)updateAndScheduleDiskWrite;
- (void)encodeWithCoder:(id)a0;

@end
