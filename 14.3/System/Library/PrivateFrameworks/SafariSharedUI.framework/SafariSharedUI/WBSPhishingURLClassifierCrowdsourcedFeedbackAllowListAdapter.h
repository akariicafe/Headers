@class WBSCrowdsourcedFeedbackDomainNormalizer;
@protocol WBSCrowdsourcedFeedbackAllowList;

@interface WBSPhishingURLClassifierCrowdsourcedFeedbackAllowListAdapter : NSObject <WBSPhishingURLClassifier> {
    id<WBSCrowdsourcedFeedbackAllowList> _crowdsourcedFeedbackAllowList;
    WBSCrowdsourcedFeedbackDomainNormalizer *_crowdsourcedFeedbackDomainNormalizer;
}

- (void).cxx_destruct;
- (void)classifyURL:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (id)initWithCrowdsourcedFeedbackAllowList:(id)a0;

@end
