@class NSString, UIDelayedAction, UIInputSwitcherView;

@interface UIInputSwitcher : NSObject {
    UIDelayedAction *m_showSwitcherDelay;
    UIDelayedAction *m_hideSwitcherDelay;
    int m_state;
    UIInputSwitcherView *m_switcherView;
    double m_lastGlobeKeyUpTime;
    NSString *_newMode;
}

@property (copy, nonatomic) NSString *loadedIdentifier;
@property (nonatomic) BOOL usingCapsLockLanguageSwitch;
@property (nonatomic) BOOL dismissingEmojiPopover;

+ (id)activeInstance;
+ (id)sharedInstance;

- (BOOL)isVisible;
- (void)clearShowSwitcherTimer;
- (void)hideSwitcher;
- (void)clearHideSwitcherTimer;
- (void)cancelHideSwitcherTimer;
- (void)cancelShowSwitcherTimer;
- (void)_showSwitcherViewAsHUD;
- (void)touchHideSwitcherTimer;
- (void)showSwitcherShouldAutoHide:(BOOL)a0;
- (void)showSwitcherWithAutoHide;
- (BOOL)isVisibleOrHiding;
- (void)touchShowSwitcherTimer;
- (BOOL)handleSwitchCommand:(BOOL)a0 withHUD:(BOOL)a1 withDelay:(BOOL)a2;
- (BOOL)handleEmojiPicker;
- (id)inputModeIdentifierWithNextFlag:(BOOL)a0;
- (void)hideSwitcherIfNeeded;
- (BOOL)switchMode:(id)a0 withHUD:(BOOL)a1 withDelay:(BOOL)a2;
- (BOOL)handleGlobeKeyEvent:(id)a0 switcherIsVisible:(BOOL)a1;
- (BOOL)handleNavigationEvent:(id)a0;
- (void)updateHardwareLayout;
- (void)showSwitcherWithoutAutoHide;
- (BOOL)handleSwitchCommand:(BOOL)a0;
- (BOOL)handleSwitchingKeyEvent:(id)a0;
- (BOOL)switchMode:(id)a0 withHUD:(BOOL)a1 withDelay:(BOOL)a2 fromCapsLock:(BOOL)a3;
- (BOOL)handleModifiersChangedEvent:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)needsFullHUD;
- (void)dealloc;
- (void)handleRotate:(id)a0;
- (void)cleanUpAfterHide;

@end
