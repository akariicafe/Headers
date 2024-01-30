@class NSString, NSMutableDictionary;
@protocol BNConsideringDelegate;

@interface SBBannerAuthority : NSObject <BNConsideringDelegate, BNConsidering> {
    NSMutableDictionary *_requesterIDsToAuthorities;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<BNConsideringDelegate> delegate;

- (void).cxx_destruct;
- (void)registerAuthority:(id)a0 forRequesterIdentifier:(id)a1;
- (long long)shouldOverlapPresentable:(id)a0 withPresentable:(id)a1;
- (void)bannerAuthority:(id)a0 mayChangeDecisionForResponsiblePresentable:(id)a1;
- (long long)shouldPresentPresentable:(id)a0 withPresentedPresentables:(id)a1 responsiblePresentable:(out id *)a2;
- (long long)_mediatedDecisionFromDecisions:(id)a0 defaultDecision:(long long)a1;

@end
