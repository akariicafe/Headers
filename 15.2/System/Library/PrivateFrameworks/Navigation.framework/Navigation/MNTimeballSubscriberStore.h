@class NSArray, NSMutableArray, NSLock;

@interface MNTimeballSubscriberStore : NSObject {
    NSMutableArray *_subscriptions;
    NSLock *_subscriptionsLock;
}

@property (readonly, nonatomic) NSArray *subscriptions;

- (void)unsubscribe:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)subscribe:(id)a0;
- (void)unsubscribeFromDestination:(id)a0;

@end
