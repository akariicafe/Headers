@class NSString;
@protocol BPSSubscriber;

@interface _BPSLastInnser : NSObject <BPSSubscriber>

@property (retain, nonatomic) id<BPSSubscriber> downstream;
@property (retain, nonatomic) id last;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)receiveCompletion:(id)a0;
- (void).cxx_destruct;
- (id)initWithDownstream:(id)a0;
- (void)receiveSubscription:(id)a0;
- (void)cancel;
- (long long)receiveInput:(id)a0;

@end
