@class NSDictionary, NSURL, RCConfigurationSettings, NSObject;
@protocol OS_dispatch_queue;

@interface RCEndpointOperation : RCOperation

@property (retain, nonatomic) NSDictionary *configurationResourcesByRequestKey;
@property (retain, nonatomic) RCConfigurationSettings *configurationSettings;
@property (retain, nonatomic) NSDictionary *changeTagsByRequestKey;
@property (retain, nonatomic) NSURL *endpointURL;
@property (copy, nonatomic) id /* block */ configurationCompletionHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue;
@property (copy, nonatomic) id /* block */ networkEventHandler;

- (unsigned long long)maxRetries;
- (void)resetForRetry;
- (BOOL)validateOperation;
- (void)operationWillFinishWithError:(id)a0;
- (BOOL)canRetryWithError:(id)a0 retryAfter:(id *)a1;
- (void)performOperation;
- (id)requestDataForSettings:(id)a0;
- (void)_parseEndpointResponse:(id)a0 configurationSettings:(id)a1 maxAge:(id)a2 completion:(id /* block */)a3;
- (void)_fetchConfigurationWithSettings:(id)a0;
- (void).cxx_destruct;
- (id)_configurationErrorForErrorDicts:(id)a0;

@end
