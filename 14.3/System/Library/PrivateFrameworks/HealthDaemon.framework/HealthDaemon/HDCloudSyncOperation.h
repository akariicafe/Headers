@class NSUUID, HDCloudSyncOperationConfiguration, HDProfile, NSProgress, HDCloudSyncCloudState, NSString;

@interface HDCloudSyncOperation : NSObject <NSProgressReporting> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id /* block */ _onSuccess;
    id /* block */ _onError;
    double _startTime;
    double _endTime;
    NSString *_shortOperationIdentifier;
}

@property (readonly, nonatomic) HDProfile *profile;
@property (readonly, nonatomic) HDCloudSyncOperationConfiguration *configuration;
@property (readonly, nonatomic) NSProgress *progress;
@property (readonly, nonatomic) long long status;
@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (retain) HDCloudSyncCloudState *cloudState;
@property (copy) id /* block */ onSuccess;
@property (copy) id /* block */ onError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)progressCount;
+ (BOOL)shouldLogAtOperationStart;
+ (BOOL)shouldProduceOperationAnalytics;
+ (BOOL)shouldLogAtOperationEnd;
+ (id /* block */)unitTest_operationHandler;
+ (void)unitTest_setOperationHandler:(id /* block */)a0;
+ (void)unitTest_clearAllOperationHandlers;

- (id)init;
- (void).cxx_destruct;
- (void)main;
- (BOOL)finishWithSuccess:(BOOL)a0 error:(id)a1;
- (void)skip;
- (void)start;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;
- (id)operationIgnoringErrors;
- (void)delegateToOperation:(id)a0;
- (id)analyticsDictionary;
- (void)updateCompletedProgressCount:(long long)a0;
- (id)operationWithRunCondition:(id /* block */)a0;
- (void)chainFromOperation:(id)a0 transitionHandler:(id /* block */)a1;
- (double)_lock_currentDuration;
- (id)initWithPreceedingOperation:(id)a0 transitionHandler:(id /* block */)a1;

@end
