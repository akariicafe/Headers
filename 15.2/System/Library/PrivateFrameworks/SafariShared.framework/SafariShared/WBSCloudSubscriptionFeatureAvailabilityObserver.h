@class CloudFeatureObject, NSString, NSObject, FeatureChangeObserver;
@protocol OS_dispatch_queue;

@interface WBSCloudSubscriptionFeatureAvailabilityObserver : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_featureIdentifier;
    FeatureChangeObserver *_changeObserverToken;
    CloudFeatureObject *_featureObject;
    BOOL _isEligible;
}

@property (class, readonly, nonatomic) WBSCloudSubscriptionFeatureAvailabilityObserver *provisionNewHideMyEmailAvailabilityObserver;
@property (class, readonly, nonatomic) WBSCloudSubscriptionFeatureAvailabilityObserver *porcupineAvailabilityObserver;

- (id)initWithFeatureIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)getFeatureEligibilityWithCompletionHandler:(id /* block */)a0;
- (void)_requestFeatureEligibilityBlockingQueueUntilResponse:(BOOL)a0;
- (void)getFeatureAvailabilityWithCompletionHandler:(id /* block */)a0;
- (void)_requestFeatureObjectBlockingQueueUntilResponse:(BOOL)a0;
- (void)dealloc;
- (BOOL)_overridenAvailability;

@end
