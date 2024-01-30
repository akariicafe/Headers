@class NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface NEIKEv2InformationalContext : NEIKEv2RequestContext

@property (retain, nonatomic) NSArray *privateNotifies;
@property (nonatomic) unsigned int maxRetries;
@property (nonatomic) unsigned long long retryIntervalInMilliseconds;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (copy, nonatomic) id /* block */ callback;

- (void).cxx_destruct;
- (id)description;
- (void)sendCallbackSuccess:(BOOL)a0 session:(id)a1;
- (id)initWithPrivateNotifies:(id)a0 maxRetries:(unsigned int)a1 retryIntervalMilliseconds:(unsigned long long)a2 callbackQueue:(id)a3 callback:(id /* block */)a4;

@end
