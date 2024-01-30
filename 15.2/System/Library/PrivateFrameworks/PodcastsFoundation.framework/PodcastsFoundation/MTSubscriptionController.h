@class NSString;

@interface MTSubscriptionController : NSObject {
    void /* unknown type, empty encoding */ requestController;
}

@property (class, nonatomic, readonly) MTSubscriptionController *sharedInstance;
@property (class, nonatomic, readonly) long long alreadySubscribedErrorCode;
@property (class, nonatomic, readonly) NSString *subscriptionControllerErrorDomain;

- (void).cxx_destruct;
- (id)init;
- (void)subscribeToShowWithPodcastStoreId:(id)a0 account:(id)a1 completion:(id /* block */)a2;

@end
