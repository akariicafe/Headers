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
- (BOOL)isSelected;
- (void)expandModule;
- (void).cxx_destruct;
- (id)glyphState;
- (void)openAccessibilityShortcutSettings;
- (void)optionToggled;

@end
