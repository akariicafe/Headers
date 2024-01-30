@class NSString, SSMachineDataRequest;

@interface ISMachineDataActionOperation : ISOperation {
    BOOL _blocksPurchaseRequests;
    BOOL _hidesServerDrivenDialogs;
    SSMachineDataRequest *_request;
    id /* block */ _resultBlock;
    NSString *_syncState;
    NSString *_userAgent;
}

@property (readonly) SSMachineDataRequest *machineDataRequest;
@property BOOL blocksPurchaseRequests;
@property BOOL hidesServerDrivenDialogs;
@property (copy) id /* block */ resultBlock;
@property (copy) NSString *userAgent;
@property (readonly) NSString *syncState;

- (id)uniqueKey;
- (void)run;
- (void).cxx_destruct;
- (BOOL)_shouldRetryAfterError:(id)a0;
- (id)initWithMachineDataRequest:(id)a0;
- (BOOL)_provisionWithRequest:(id)a0 error:(id *)a1;
- (BOOL)_syncMachineWithRequest:(id)a0 error:(id *)a1;
- (BOOL)_eraseProvisioning;

@end
