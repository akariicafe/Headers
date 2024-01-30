@class NSString, FCActivityManager;
@protocol FCActivityDescribing;

@interface FCUIFocusEnablementIndicatorManager : NSObject <FCActivityManagerObserving> {
    FCActivityManager *_activityManager;
    id<FCActivityDescribing> _lastActiveActivity;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lastActiveActivityLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)managerWithBannerPoster:(id)a0 systemApertureElementRegistrar:(id)a1;

- (void)activeActivityDidChangeForManager:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)postActivity:(id)a0 enabled:(BOOL)a1;
- (void)revokeWithReason:(id)a0;
- (BOOL)shouldKeepPresentingAfterActiveActivityDidChange:(id)a0;

@end
