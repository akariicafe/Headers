@class NSArray, NSMutableArray, NSLock;

@interface MNTimeballSubscriberStore : NSObject {
    NSMutableArray *_subscriptions;
    NSLock *_subscriptionsLock;
}

@property (readonly, nonatomic) NSArray *subscriptions;

- (void)subscribe:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)unsubscribe:(id)a0;
- (void)unsubscribeFromDestination:(id)a0;

@end
