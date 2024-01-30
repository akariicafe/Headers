@class NSUUID;
@protocol ASDRequestProxy, ASDRequestObserver;

@interface ASDRequest : NSObject <ASDRequestDelegate, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) id<ASDRequestProxy> proxy;
@property (weak) id<ASDRequestObserver> observer;
@property (readonly, nonatomic) NSUUID *requestID;

+ (id)_sharedBroker;
+ (void)cancelAllRequestsWithErrorHandler:(id /* block */)a0;

- (id)init;
- (void).cxx_destruct;
- (void)_callErrorHandler:(id /* block */)a0 withError:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)_callErrorHandler:(id /* block */)a0 withError:(id)a1 orDefaultCode:(unsigned long long)a2;
- (void)_notifyObserverOfCompletionWithError:(id)a0;
- (void)_submitRequestWithErrorHandler:(id /* block */)a0;
- (void)_cancelWithErrorHandler:(id /* block */)a0;
- (id)description;
- (void)receiveResponse:(id)a0;
- (void)_startWithErrorHandler:(id /* block */)a0;
- (void)encodeWithCoder:(id)a0;

@end
