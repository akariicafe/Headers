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

+ (id)sharedInstance;
+ (id)activeInstance;

- (void)setInputMode:(id)a0;
- (void)updateSelectionWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (unsigned long long)numberOfItems;
- (void)didShow;
- (void)dealloc;
- (void)willFade;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)nextInputMode;
- (BOOL)shouldShow;
- (id)selectedInputMode;
- (void)fadeWithDelay:(double)a0;
- (void)selectInputMode:(id)a0;
- (id)previousInputMode;
- (void)reloadInputModes;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_canAddLaunchItem;
- (id)defaultInputMode;
- (BOOL)_isHandBiasSwitchVisible;
- (unsigned long long)defaultSelectedIndex;
- (BOOL)shouldShowSelectionExtraViewForIndexPath:(id)a0;
- (long long)_indexOfInputSwitcherItemWithIdentifier:(id)a0;
- (void)selectRowForInputMode:(id)a0;
- (long long)_indexOfFastSwitchToggleModeForIdentifier:(id)a0;
- (void)returnToKeyboardIfNeeded;
- (void)willFadeForSelectionAtIndex:(unsigned long long)a0;
- (void)_reloadInputSwitcherItems;
- (void)showAsPopupForKey:(id)a0 inLayout:(id)a1;
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
- (void)switchAction;
- (id)subtitleFontForItemAtIndex:(unsigned long long)a0;
- (BOOL)usesDeviceLanguageForItemAtIndex:(unsigned long long)a0;
- (BOOL)didHitDockItemWithinTypingWindow;
- (id)buttonPressed:(id)a0 withEvent:(id)a1 location:(struct CGPoint { double x0; double x1; })a2 isForDictation:(BOOL)a3 tapAction:(id /* block */)a4;
- (struct CGSize { double x0; double x1; })preferredSize;

@end
