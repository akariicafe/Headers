@class NSString, _BPSAbstractCombineLatest;

@interface _BPSAbstractCombineLatestSide : NSObject <BPSSubscriber>

@property (nonatomic) unsigned long long index;
@property (retain, nonatomic) _BPSAbstractCombineLatest *combiner;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)receiveCompletion:(id)a0;
- (void).cxx_destruct;
- (void)receiveSubscription:(id)a0;
- (id)initWithIndex:(unsigned long long)a0 combiner:(id)a1;
- (void)cancel;
- (long long)receiveInput:(id)a0;

@end
