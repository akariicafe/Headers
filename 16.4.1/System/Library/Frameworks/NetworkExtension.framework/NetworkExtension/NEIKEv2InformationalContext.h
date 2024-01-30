@class NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface NEIKEv2InformationalContext : NEIKEv2RequestContext {
    unsigned int _maxRetries;
    NSArray *_privateNotifies;
    unsigned long long _retryIntervalInMilliseconds;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    id /* block */ _callback;
}

- (id)description;
- (void).cxx_destruct;
- (void)sendCallbackSuccess:(BOOL)a0 session:(id)a1;

@end
