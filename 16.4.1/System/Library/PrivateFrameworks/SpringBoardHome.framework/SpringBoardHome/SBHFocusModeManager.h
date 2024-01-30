@class NSString, SBHFocusModeFeatureIntroductionItem, SBHFocusMode, SBHIconManager;

@interface SBHFocusModeManager : NSObject <SBFolderObserver>

@property (weak, nonatomic) SBHIconManager *iconManager;
@property (retain, nonatomic) SBHFocusMode *activeFocusMode;
@property (retain, nonatomic) SBHFocusModeFeatureIntroductionItem *focusModeFeatureIntroductionItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithIconManager:(id)a0;
- (void)updateFocusModePopoverVisibility;
- (void)removeFocusModeRequiringIntroduction:(id)a0;
- (void)dismissAllFocusModePopovers;
- (void)folder:(id)a0 didAddList:(id)a1;
- (void)_iconEditingDidChange:(id)a0;
- (id)_focusModesRequiringIntroduction;
- (void)dealloc;
- (void)_iconModelDidChange:(id)a0;
- (void).cxx_destruct;
- (void)addFocusModeRequiringIntroduction:(id)a0;

@end
