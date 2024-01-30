@class NSString;
@protocol BPSSubscriber;

@interface _BPSScanInner : NSObject <BPSSubscriber>

@property (retain, nonatomic) id<BPSSubscriber> downstream;
@property (retain, nonatomic) id result;
@property (copy, nonatomic) id /* block */ nextPartialResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

- (long long)receiveInput:(id)a0;
- (void)receiveCompletion:(id)a0;
- (void)receiveSubscription:(id)a0;
- (id)initWithDownstream:(id)a0 nextPartialResult:(id /* block */)a1 initialResult:(id)a2;
- (void)cancel;
- (id)init;
- (void).cxx_destruct;

@end
