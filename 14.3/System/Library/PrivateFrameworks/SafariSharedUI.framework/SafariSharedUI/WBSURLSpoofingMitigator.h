@class _WKUserInitiatedAction, NSTimer, NSDate;

@interface WBSURLSpoofingMitigator : NSObject {
    NSDate *_dateOfLastSuspiciousProvisionalNavigationInterruption;
    unsigned long long _recentlyInterruptedNavigationCount;
    _WKUserInitiatedAction *_userInitiatedAction;
    NSTimer *_timerForRevertingToCommittedURL;
    BOOL _hasCommittedChromeInitiatedLoad;
}

@property (readonly, nonatomic) BOOL UIShouldReflectCommittedURLInsteadOfCurrentURL;
@property (nonatomic) long long navigationSource;

+ (BOOL)automaticallyNotifiesObserversOfUIShouldReflectCommittedURLInsteadOfCurrentURL;

- (void).cxx_destruct;
- (void)willStartNewBrowserChromeInitiatedNavigation;
- (void)didCommitNavigation;
- (void)_stopTrackingInterruptedProvisionalNavigations;
- (void)_setUIShouldReflectCommittedURLInsteadOfCurrentURL:(BOOL)a0;
- (void)didFailProvisionalNavigationWithError:(id)a0;
- (void)_determineIfPageIsTryingToSpoofAddressFieldWhenInterruptingProvisionalNavigation;
- (void)didStartProvisionalNavigationWithUserInitiatedAction:(id)a0;

@end
