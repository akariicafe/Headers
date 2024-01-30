@interface MOSubscriber : NSObject

- (unsigned long long)receiveInput:(id)a0;
- (void)receiveCompletion:(id)a0;
- (void)receiveSubscription:(id)a0;
- (id)initSubscriber;

@end
