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
- (void).cxx_destruct;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)a0 userInfo:(id)a1;
- (void)dealloc;
- (id)initWithDocument:(id)a0;
- (void)_presentPrivacyReport;
- (void)_presentPromptToEnableTrackerProtection;
- (void)_enableTrackerProtection;
- (void)_initializeManagedProfileConnection;
- (void)_dismissPromptIfTrackerProtectionEnabled;

@end
