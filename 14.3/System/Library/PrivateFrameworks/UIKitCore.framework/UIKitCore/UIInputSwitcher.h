@class NSString, UIDelayedAction, UIInputSwitcherView;

@interface UIInputSwitcher : NSObject {
    UIDelayedAction *m_keyHoldDelay;
    UIDelayedAction *m_showSwitcherDelay;
    UIDelayedAction *m_hideSwitcherDelay;
    int m_state;
    UIInputSwitcherView *m_switcherView;
    double m_lastGlobeKeyUpTime;
    NSString *_newMode;
}

@property (copy, nonatomic) NSString *loadedIdentifier;
@property (nonatomic) BOOL isGlobeKeyDown;
@property (nonatomic) BOOL usingCapsLockLanguageSwitch;
@property (nonatomic) BOOL dismissingEmojiPopover;

+ (id)sharedInstance;
+ (id)activeInstance;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isVisible;
- (void)handleRotate:(id)a0;
- (void)clearShowSwitcherTimer;
- (void)cleanUpAfterHide;
- (void)clearHideSwitcherTimer;
- (void)cancelHideSwitcherTimer;
- (void)cancelShowSwitcherTimer;
- (void)_showSwitcherViewAsHUD;
- (void)touchHideSwitcherTimer;
- (void)showSwitcherShouldAutoHide:(BOOL)a0;
- (void)showSwitcherWithAutoHide;
- (BOOL)isVisibleOrHiding;
- (void)clearKeyHoldTimer;
- (void)showSwitcherWithoutAutoHide;
- (BOOL)handleSwitchCommand:(BOOL)a0 withHUD:(BOOL)a1 withDelay:(BOOL)a2;
- (BOOL)handleEmojiPicker;
- (id)inputModeIdentifierWithNextFlag:(BOOL)a0;
- (BOOL)switchMode:(id)a0 withHUD:(BOOL)a1 withDelay:(BOOL)a2;
- (void)touchShowSwitcherTimer;
- (void)hideSwitcherIfNeeded;
- (BOOL)handleGlobeKeyEvent:(id)a0 switcherIsVisible:(BOOL)a1;
- (BOOL)handleNavigationEvent:(id)a0;
- (void)touchKeyHoldTimer;
- (void)updateHardwareLayout;
- (BOOL)handleSwitchCommand:(BOOL)a0;
- (BOOL)switchMode:(id)a0 withHUD:(BOOL)a1 withDelay:(BOOL)a2 fromCapsLock:(BOOL)a3;
- (BOOL)handleSwitchingKeyEvent:(id)a0;
- (BOOL)handleModifiersChangedEvent:(id)a0;
- (void)hideSwitcher;
- (BOOL)needsFullHUD;

@end
