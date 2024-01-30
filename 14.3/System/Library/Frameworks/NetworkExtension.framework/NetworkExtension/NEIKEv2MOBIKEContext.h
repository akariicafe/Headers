@class NSString, NWEndpoint, NSObject;
@protocol OS_dispatch_queue;

@interface NEIKEv2MOBIKEContext : NEIKEv2RequestContext

@property (copy, nonatomic) NSString *mobikeInterface;
@property (nonatomic) BOOL invalidateTransport;
@property (copy, nonatomic) NWEndpoint *mobikeEndpoint;
@property (nonatomic) unsigned int maxRetries;
@property (nonatomic) unsigned long long retryIntervalInMilliseconds;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (copy, nonatomic) id /* block */ callback;

- (void).cxx_destruct;
- (id)description;
- (id)initWithMOBIKEInterface:(id)a0 mobikeEndpoint:(id)a1 invalidateTransport:(BOOL)a2 maxRetries:(unsigned int)a3 retryIntervalMilliseconds:(unsigned long long)a4 callbackQueue:(id)a5 callback:(id /* block */)a6;
- (void)sendCallbackSuccess:(BOOL)a0 session:(id)a1 error:(id)a2;

@end
