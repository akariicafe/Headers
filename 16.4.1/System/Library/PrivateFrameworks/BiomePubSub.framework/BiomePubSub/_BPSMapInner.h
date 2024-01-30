@class NSString;
@protocol BPSSubscriber;

@interface _BPSMapInner : NSObject <BPSSubscriber>

@property (retain, nonatomic) id<BPSSubscriber> downstream;
@property (copy, nonatomic) id /* block */ transform;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)receiveInput:(id)a0;
- (void)receiveCompletion:(id)a0;
- (void)receiveSubscription:(id)a0;
- (id)initWithDownstream:(id)a0 transform:(id /* block */)a1;
- (void)cancel;
- (void).cxx_destruct;

@end
