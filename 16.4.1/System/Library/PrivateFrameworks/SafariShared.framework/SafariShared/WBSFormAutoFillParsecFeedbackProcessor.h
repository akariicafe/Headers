@class NSString, WBSCrowdsourcedFeedbackDomainNormalizer, NSObject;
@protocol WBSFormAutoFillFeedbackDomainPolicyProvider, WBSParsecGlobalFeedbackDispatcher, OS_dispatch_queue;

@interface WBSFormAutoFillParsecFeedbackProcessor : NSObject <WBSFormAutoFillFeedbackProcessor> {
    id<WBSParsecGlobalFeedbackDispatcher> _globalFeedbackDispatcher;
    unsigned long long _autoFillVersion;
    WBSCrowdsourcedFeedbackDomainNormalizer *_domainNormalizer;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

@property (retain, nonatomic) id<WBSFormAutoFillFeedbackDomainPolicyProvider> domainPolicyProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)_feedbackWithCorrectionSet:(id)a0 includeOrigin:(BOOL)a1;
- (void)_getFeedbackWithCorrectionSet:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithGlobalFeedbackDispatcher:(id)a0 domainPolicyProvider:(id)a1 autoFillVersion:(unsigned long long)a2;
- (void)sendFeedbackWithCorrectionSet:(id)a0;

@end
