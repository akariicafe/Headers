@class AMSBagKeySet, NSString, NSObject;
@protocol OS_dispatch_queue, AMSBagProtocol;

@interface AMSSharedStoreReview : NSObject <AMSBagConsumer_Project, AMSBagConsumer>

@property (class, readonly, nonatomic) AMSBagKeySet *bagKeySet;
@property (class, readonly, nonatomic) NSString *bagSubProfile;
@property (class, readonly, nonatomic) NSString *bagSubProfileVersion;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *sharedStoreReviewQueue;
@property (retain, nonatomic) id<AMSBagProtocol> bag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;
+ (id)_storeReviewMetrics;
+ (void)_logDidAttemptPromptReviewWithStoreReviewMetrics:(id)a0 currentTime:(id)a1;
+ (void)_applicationDidForegroundWithCurrentTime:(id)a0 storeReviewMetrics:(id)a1 sessionInterval:(long long)a2;
+ (BOOL)_shouldPromptReviewForStoreReviewMetrics:(id)a0 sessionCount:(long long)a1;
+ (void)_persistStoreReviewMetrics:(id)a0;
+ (BOOL)_shouldLogNewSessionWithLastLoggedTimeStamp:(id)a0 currentTime:(id)a1 sessionInterval:(long long)a2;
+ (void)_logNewSessionWithStoreReviewMetrics:(id)a0 currentTime:(id)a1;
+ (void)addRequiredBagKeysToAggregator:(id)a0;

- (BOOL)isEnabled;
- (id)initWithBag:(id)a0;
- (id)isReviewEnabled;
- (void)applicationDidForeground;
- (void)didAttemptPromptReview;
- (BOOL)shouldAttemptPromptReview;
- (void).cxx_destruct;

@end
