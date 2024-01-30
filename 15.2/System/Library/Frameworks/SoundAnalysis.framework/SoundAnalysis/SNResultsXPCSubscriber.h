@class NSString;
@protocol SNResultsObserving;

@interface SNResultsXPCSubscriber : NSObject <SNResultsObserving, SNResultsObservingXPCProtocol> {
    id<SNResultsObserving> _receiver;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)request:(id)a0 didFailWithError:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)request:(id)a0 didProduceResult:(id)a1;
- (void)requestDidComplete:(id)a0;
- (id)initWithReceiver:(id)a0;
- (void)xpcRequest:(id)a0 didProduceResult:(id)a1 completionHandler:(id /* block */)a2;
- (void)xpcRequest:(id)a0 didFailWithError:(id)a1 completionHandler:(id /* block */)a2;
- (void)xpcRequestDidComplete:(id)a0 completionHandler:(id /* block */)a1;

@end
