@class NSString;
@protocol SNResultsObservingXPCProtocol, NSXPCProxyCreating;

@interface SNResultsXPCPublisher : NSObject <SNResultsObserving> {
    id<SNResultsObservingXPCProtocol, NSXPCProxyCreating> _subscriber;
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
- (id)initWithSubscriber:(id)a0;

@end
