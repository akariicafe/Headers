@class _SFSettingsAlertItem, NSString, MCProfileConnection, UIViewController;
@protocol _SFPageFormatMenuItemControllerDelegate, _SFBrowserDocument;

@interface _SFPageFormatMenuPrivacyReportController : NSObject <MCProfileConnectionObserver, _SFPageFormatMenuItemController> {
    MCProfileConnection *_profileConnection;
    UIViewController *_enableTrackerProtectionViewController;
}

@property (readonly, nonatomic) id<_SFBrowserDocument> document;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) _SFSettingsAlertItem *alertItem;
@property (weak, nonatomic) id<_SFPageFormatMenuItemControllerDelegate> delegate;

- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)a0 userInfo:(id)a1;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)a0 userInfo:(id)a1;
- (void)dealloc;
- (id)initWithDocument:(id)a0;
- (void).cxx_destruct;
- (void)_dismissPromptIfTrackerProtectionEnabled;
- (void)_initializeManagedProfileConnection;
- (void)_presentPrivacyReport;
- (BOOL)_presentPromptToTurnOnTrackingProtection;

@end
