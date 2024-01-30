@class AXCCShortcutModuleViewController, CCUIContentModuleContext, NSString, UIViewController;
@protocol CCUIContentModuleBackgroundViewController;

@interface AXCCShortcutModule : CCUIToggleModule <AXCCShortcutModuleViewControllerDelegate, CCUIContentModule>

@property (retain, nonatomic) AXCCShortcutModuleViewController *contentViewController;
@property (retain, nonatomic) CCUIContentModuleContext *contentModuleContext;
@property (readonly, nonatomic) UIViewController<CCUIContentModuleBackgroundViewController> *backgroundViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)glyphState;
- (BOOL)isSelected;
- (void).cxx_destruct;
- (void)expandModule;
- (void)optionToggled;
- (void)openAccessibilityShortcutSettings;

@end
