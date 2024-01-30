@class NSString, ISURLBag, NSObject;
@protocol OS_dispatch_queue;

@interface ISBiometricOptInOperation : ISOperation {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BOOL _promptUser;
    id /* block */ _resultBlock;
    ISURLBag *_urlBag;
}

@property BOOL promptUser;
@property (copy) NSString *topicName;
@property (copy) NSString *userAgent;
@property (copy) id /* block */ resultBlock;

- (void)run;
- (id)init;
- (void).cxx_destruct;
- (void)_loadURLBag;
- (id)_newSourceByStartingTimeoutTimer;
- (void)_performOptInDialogMetricsWithResult:(BOOL)a0 error:(id)a1;
- (BOOL)_performOptInDialogOperationWithError:(id *)a0;
- (BOOL)_performPasscodeDialogOperationWithError:(id *)a0;
- (void)_updateTouchIDSettingsForAccount:(id)a0;

@end
