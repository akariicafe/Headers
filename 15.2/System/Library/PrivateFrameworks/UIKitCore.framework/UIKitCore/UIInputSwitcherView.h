@class NSArray, NSMutableArray, UIInputSwitcherGestureState;

@interface UIInputSwitcherView : UIKeyboardMenuView <_UIInputSwitcherSplitMenu> {
    NSArray *m_inputSwitcherItems;
    BOOL m_isForDictation;
    UIInputSwitcherGestureState *m_gestureState;
}

@property (readonly, nonatomic) NSMutableArray *inputModes;
@property (nonatomic) BOOL messagesWriteboardFromSwitcher;
@property (nonatomic) BOOL fileReportFromSwitcher;
@property (nonatomic) BOOL showsSwitches;
@property (copy, nonatomic) id /* block */ finishSplitTransitionBlock;

+ (id)activeInstance;
+ (id)sharedInstance;
+ (BOOL)canShowKeyboardSettings;

- (unsigned long long)numberOfItems;
- (void)setInputMode:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)didShow;
- (void)willFade;
- (BOOL)shouldShow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)fadeWithDelay:(double)a0;
- (id)selectedInputMode;
- (id)previousInputMode;
- (struct CGSize { double x0; double x1; })preferredSize;
- (BOOL)_canAddLaunchItem;
- (BOOL)_isHandBiasSwitchVisible;
- (unsigned long long)defaultSelectedIndex;
- (id)defaultInputMode;
- (void)selectRowForInputMode:(id)a0;
- (BOOL)shouldShowSelectionExtraViewForIndexPath:(id)a0;
- (long long)_indexOfInputSwitcherItemWithIdentifier:(id)a0;
- (long long)_indexOfFastSwitchToggleModeForIdentifier:(id)a0;
- (void)returnToKeyboardIfNeeded;
- (void)willFadeForSelectionAtIndex:(unsigned long long)a0;
- (void)showAsPopupForKey:(id)a0 inLayout:(id)a1;
- (void)_reloadInputSwitcherItems;
- (id)_itemWithIdentifier:(id)a0;
- (id)subtitleForItemAtIndex:(unsigned long long)a0;
- (void)customizeCell:(id)a0 forItemAtIndex:(unsigned long long)a1;
- (void)_segmentControlValueDidChange:(id)a0;
- (void)didSelectItemAtIndex:(unsigned long long)a0;
- (void)didFinishSplitTransition;
- (void)toggleKeyboardFloatingPreference;
- (BOOL)shouldSelectItemAtIndex:(unsigned long long)a0;
- (void)selectNextInputMode;
- (void)selectPreviousInputMode;
- (id)titleForItemAtIndex:(unsigned long long)a0;
- (id)localizedTitleForItemAtIndex:(unsigned long long)a0;
- (id)fontForItemAtIndex:(unsigned long long)a0;
- (id)subtitleFontForItemAtIndex:(unsigned long long)a0;
- (BOOL)usesDeviceLanguageForItemAtIndex:(unsigned long long)a0;
- (BOOL)didHitDockItemWithinTypingWindow;
- (id)buttonPressed:(id)a0 withEvent:(id)a1 location:(struct CGPoint { double x0; double x1; })a2 isForDictation:(BOOL)a3 tapAction:(id /* block */)a4;
- (void)updateSelectionWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)switchAction;
- (void)dealloc;
- (id)nextInputMode;
- (void)selectInputMode:(id)a0;
- (void)reloadInputModes;

@end
