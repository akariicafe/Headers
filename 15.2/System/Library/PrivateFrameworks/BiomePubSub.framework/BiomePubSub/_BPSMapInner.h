@class NSString;
@protocol BPSSubscriber;

@interface _BPSMapInner : NSObject <BPSSubscriber>

@property (retain, nonatomic) id<BPSSubscriber> downstream;
@property (copy, nonatomic) id /* block */ transform;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)receiveCompletion:(id)a0;
- (void).cxx_destruct;
- (void)receiveSubscription:(id)a0;
- (id)initWithDownstream:(id)a0 transform:(id /* block */)a1;
- (void)cancel;
- (long long)receiveInput:(id)a0;

@end
