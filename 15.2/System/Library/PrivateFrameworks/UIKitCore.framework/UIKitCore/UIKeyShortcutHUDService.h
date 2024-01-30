@class NSTimer, _UIKeyShortcutHUDConfiguration, NSArray, NSValue, _UIKeyShortcutHUDWindow, UIPhysicalKeyboardEvent, NSString, _UIKeyShortcutHUDModifierKeyListener;

@interface UIKeyShortcutHUDService : NSObject <_UIKeyShortcutHUDViewControllerDelegate, _UIKeyShortcutHUDWindowDelegate, _UIKeyShortcutHUDKeyListenerDelegate> {
    struct { unsigned char isPresentingHUD : 1; unsigned char isDismissingHUD : 1; unsigned char hasPresentationObserversRegistered : 1; } _flags;
}

@property (class, readonly, nonatomic, getter=isHUDFeatureEnabled) BOOL hudFeatureEnabled;
@property (class, readonly, nonatomic) UIKeyShortcutHUDService *sharedHUDService;

@property (retain, nonatomic) _UIKeyShortcutHUDWindow *hudWindow;
@property (retain, nonatomic) NSArray *scheduledHUDHoverGestureRecognizers;
@property (retain, nonatomic) NSValue *scheduledHUDInitialPointerLocation;
@property (readonly, nonatomic) _UIKeyShortcutHUDModifierKeyListener *modifierKeyListener;
@property (retain, nonatomic) NSTimer *scheduledHUDTimer;
@property (retain, nonatomic) _UIKeyShortcutHUDConfiguration *scheduledHUDConfiguration;
@property (readonly, nonatomic) long long hudPresentationState;
@property (nonatomic, getter=isModifierKeyDownForHUDDismissal) BOOL modifierKeyDownForHUDDismissal;
@property (retain, nonatomic) UIPhysicalKeyboardEvent *lastKeyboardEvent;
@property (readonly, nonatomic, getter=isHUDVisible) BOOL hudVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_applicationWillResignActive:(id)a0;
- (void)beginSearching;
- (void)_unregisterForSystemHUDPreventUnintendedPresentationDarwinNotificationsIfNeeded;
- (void)_registerForSystemHUDPreventUnintendedPresentationDarwinNotificationsIfNeeded;
- (void)keyShortcutHUDViewController:(id)a0 didSelectKeyCommand:(id)a1 withOriginalTarget:(id)a2;
- (void)_handleSystemHUDPreventUnintendedPresentationDarwinNotificationIfNeeded;
- (void)_sendSystemHUDPreventUnintendedPresentationDarwinNotificationIfNeeded;
- (void)handleKeyboardEvent:(id)a0;
- (void)modifierKeyListenerDidPressNonModifierKey:(id)a0;
- (void)modifierKeyListener:(id)a0 didUpdateModifierFlag:(long long)a1 withEvent:(id)a2;
- (void)dismissHUDIfNeeded;
- (BOOL)_isHUDSupported;
- (void)_registerForSystemHUDPresentationDarwinNotifications;
- (void)_unregisterForSystemHUDPresentationDarwinNotifications;
- (void)cancelScheduledHUDPresentationIfNeeded;
- (void)presentHUDIfAllowedWithConfiguration:(id)a0;
- (void)_addPresentationObserversIfNeeded;
- (void)_handleScheduledHUDPointerHover:(id)a0;
- (void)_discardScheduledHUDBookkeeping;
- (BOOL)_isHUDAllowedOverCurrentWindow;
- (void)_didTakeScreenshot:(id)a0;
- (BOOL)_isHUDAllowedForConfiguration:(id)a0;
- (void)presentHUDWithConfiguration:(id)a0;
- (BOOL)_isHUDAllowedToBePresentedForPresentationState:(long long)a0;
- (void)dismissHUDIfNeededWithCompletionHandler:(id /* block */)a0;
- (void)_sendSystemHUDPresentationDarwinNotificationIfNeeded;
- (void)_removePresentationObserversIfNeeded;
- (void)scheduleHUDPresentation;
- (void)preventUnintendedSystemHUDPresentationIfNeeded;
- (long long)_shortcutTypeForHUDPresentedWithModifierFlag:(long long)a0;
- (BOOL)_canSummonHUDWithModifierFlag:(long long)a0;
- (BOOL)_isHUDAllowedToBeScheduledForPresentationState:(long long)a0;
- (void)_handleSystemHUDPresentationDarwinNotification;
- (void)dismissOrCancelHUDPresentationIfNeeded;
- (void)presentHUD;
- (void)keyShortcutHUDViewControllerDidRequestDismissal:(id)a0;
- (void)keyShortcutHUDWindowDidResignKey:(id)a0;
- (void)keyShortcutHUDWindowSceneDidResignKeyboardFocus:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)keyShortcutHUDViewControllerDidBeginTypeAheadSearch:(id)a0;
- (void)dealloc;
- (void)_hardwareKeyboardAvailabilityChanged:(id)a0;

@end
