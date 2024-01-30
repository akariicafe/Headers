@class NSString, NSURL, RCConfigurationResource, NSObject;
@protocol OS_dispatch_queue;

@interface RCFallbackOperation : RCOperation

@property (retain, nonatomic) RCConfigurationResource *configurationResource;
@property (retain, nonatomic) NSString *requestKey;
@property (retain, nonatomic) NSURL *fallbackURL;
@property (retain, nonatomic) RCConfigurationResource *cachedConfigurationResource;
@property (nonatomic) unsigned long long environment;
@property (nonatomic) BOOL enableExtraLogs;
@property (copy, nonatomic) id /* block */ configurationCompletionHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue;
@property (nonatomic) double fallbackTimeoutDuration;
@property (copy, nonatomic) id /* block */ networkEventHandler;

- (BOOL)validateOperation;
- (void)operationWillFinishWithError:(id)a0;
- (void)performOperation;
- (void).cxx_destruct;
- (void)_fetchConfigurationWithURL:(id)a0 requestKey:(id)a1 enableExtraLogs:(BOOL)a2 fallbackTimeoutDuration:(double)a3;
- (void)_parseFallbackResponse:(id)a0 fallbackURL:(id)a1 requestKey:(id)a2 enableExtraLogs:(BOOL)a3 maxAge:(id)a4 etag:(id)a5 lastModifiedString:(id)a6 completion:(id /* block */)a7;

@end
