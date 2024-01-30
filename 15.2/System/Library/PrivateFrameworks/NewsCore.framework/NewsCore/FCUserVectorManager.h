@class FCAsyncSerialQueue, FCUserVector, FCSubscriptionList, NSDate;
@protocol FCBundleSubscriptionProviderType, FCContentContext;

@interface FCUserVectorManager : NSObject <FCUserVectorManager>

@property (retain, nonatomic) FCAsyncSerialQueue *queue;
@property (retain, nonatomic) FCUserVector *userVector;
@property (retain, nonatomic) id<FCContentContext> contentContext;
@property (retain, nonatomic) id<FCBundleSubscriptionProviderType> bundleSubscriptionProvider;
@property (retain, nonatomic) FCSubscriptionList *subscriptionList;
@property (retain, nonatomic) NSDate *lastUpdated;

- (void)fetchUserVectorProvider:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithContentContext:(id)a0 bundleSubscriptionProvider:(id)a1 subscriptionList:(id)a2;

@end
