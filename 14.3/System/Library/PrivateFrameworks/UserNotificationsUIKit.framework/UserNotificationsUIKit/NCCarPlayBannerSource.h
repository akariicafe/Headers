@class BSTimer, NSString, BNBannerSource, NSPointerArray;
@protocol BNBannerSourceDelegate;

@interface NCCarPlayBannerSource : NSObject <BNBannerSourceDelegate, BNPresentableObserving, BNBannerSourceProvidingPrivate> {
    BNBannerSource *_bannerSource;
    NSPointerArray *_postedPresentables;
}

@property (retain, nonatomic, getter=_dismissTimer, setter=_setDismissTimer:) BSTimer *dismissTimer;
@property (retain, nonatomic, getter=_replaceTimer, setter=_setReplaceTimer:) BSTimer *replaceTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long destination;
@property (readonly, copy, nonatomic) NSString *requesterIdentifier;
@property (weak, nonatomic) id<BNBannerSourceDelegate> delegate;
@property (readonly, nonatomic, getter=isValid) BOOL valid;

+ (void)initialize;

- (id)revokePresentableWithRequestIdentifier:(id)a0 reason:(id)a1 animated:(BOOL)a2 userInfo:(id)a3 error:(out id *)a4;
- (void).cxx_destruct;
- (id)layoutDescriptionWithError:(out id *)a0;
- (void)_cancelReplaceTimer;
- (id)revokePresentableWithIdentification:(id)a0 reason:(id)a1 animated:(BOOL)a2 userInfo:(id)a3 error:(out id *)a4;
- (void)_startReplaceTimer;
- (BOOL)setSuspended:(BOOL)a0 forReason:(id)a1 revokingCurrent:(BOOL)a2 error:(out id *)a3;
- (id)keyWindowForScreen:(id)a0;
- (void)_cancelDismissTimer;
- (id)revokeAllPresentablesWithReason:(id)a0 userInfo:(id)a1 error:(out id *)a2;
- (BOOL)postPresentable:(id)a0 options:(unsigned long long)a1 userInfo:(id)a2 error:(out id *)a3;
- (void)_startDismissTimer;
- (void)presentableDidDisappearAsBanner:(id)a0 withReason:(id)a1;
- (void)invalidate;
- (void)presentableDidAppearAsBanner:(id)a0;
- (id)_bannerSource;
- (unsigned long long)_postedPresentableCount;
- (BOOL)_setSuspended:(BOOL)a0 forReason:(id)a1 revokingCurrent:(BOOL)a2;
- (void)_enqueuePostedPresentable:(id)a0;
- (void)_revokePreviouslyPostedPresentableIfPossible;
- (void)_presentableWithIdentificationDidDisappear:(id)a0;
- (void)_allPresentablesDidDisappear;
- (id)_postedPresentablesWithIdentification:(id)a0;
- (void)_presentableDidDisappear:(id)a0;
- (BOOL)_isPresentableSticky:(id)a0;
- (unsigned long long)_indexOfPostedPresentable:(id)a0;
- (id)_peekPostedPresentable;
- (id)_pullPostedPresentableAtIndex:(unsigned long long)a0;
- (void)bannerSourceDidInvalidate:(id)a0;

@end
