@class NSString, BSTimer, NSMapTable;
@protocol BNConsidering, BNPending, BNPresenting;

@interface BNBannerController : NSObject <BNPostingPrivate, BNConsideringDelegate, BNPosting, BNSuspendable> {
    NSMapTable *_presentablesInducingSuspensionToSuspendedRequesterIDs;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic, getter=_autoDequeueTimer, setter=_setAutoDequeueTimer:) BSTimer *autoDequeueTimer;
@property (readonly, nonatomic) id<BNConsidering> authority;
@property (readonly, nonatomic) id<BNPending> pender;
@property (readonly, nonatomic) id<BNPresenting> presenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (BOOL)_presentNextPendingPresentableIfPossible;
- (void)_startAutoDequeueTimerIfNecessary;
- (void)_cancelAutoDequeueTimer;
- (void)_resumeForResponsiblePresentableIfNecessaryWithIdentification:(id)a0;
- (void).cxx_destruct;
- (BOOL)revokePresentableWithRequestIdentifier:(id)a0 requesterIdentifier:(id)a1 reason:(id)a2 options:(unsigned long long)a3 animated:(BOOL)a4 userInfo:(id)a5 error:(out id *)a6;
- (BOOL)postPresentable:(id)a0 withOptions:(unsigned long long)a1 userInfo:(id)a2 error:(out id *)a3;
- (BOOL)_presentPresentableWithContext:(id)a0;
- (BOOL)setSuspended:(BOOL)a0 forReason:(id)a1 revokingCurrent:(BOOL)a2 error:(out id *)a3;
- (id)_activeSuspensionReasons;
- (id)initWithAuthority:(id)a0 pender:(id)a1 presenter:(id)a2;
- (BOOL)_isSuspended;
- (id)_penderQueue;
- (BOOL)_shouldPresentPresentable:(id)a0 withPresentedPresentables:(id)a1 responsiblePresentable:(out id *)a2;
- (id)_suspensionReasonForEnqueuedPresentable:(id)a0;
- (id)revokePresentablesWithIdentification:(id)a0 reason:(id)a1 options:(unsigned long long)a2 animated:(BOOL)a3 userInfo:(id)a4 error:(id *)a5;
- (void)_resumeForResponsiblePresentableIfNecessary:(id)a0;
- (BOOL)revokeAllPresentablesWithRequesterIdentifier:(id)a0 reason:(id)a1 options:(unsigned long long)a2 userInfo:(id)a3 error:(out id *)a4;
- (void)_suspendPenderForRequesterIdentifier:(id)a0 withResponsiblePresentable:(id)a1;
- (BOOL)_presentNextPendingPresentableIfPossible:(out id *)a0;
- (void)bannerAuthority:(id)a0 mayChangeDecisionForResponsiblePresentable:(id)a1;
- (id)revokePresentablesWithIdentification:(id)a0 reason:(id)a1 options:(unsigned long long)a2 userInfo:(id)a3 error:(out id *)a4;
- (id)_revokePresentablesWithIdentification:(id)a0 reason:(id)a1 options:(unsigned long long)a2 animated:(id)a3 userInfo:(id)a4 error:(out id *)a5;
- (BOOL)revokePresentableWithRequestIdentifier:(id)a0 requesterIdentifier:(id)a1 reason:(id)a2 options:(unsigned long long)a3 userInfo:(id)a4 error:(out id *)a5;

@end
