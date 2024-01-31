@class TUIKeyboardBrightnessModuleViewController, NSString, TUIKeyboardBrightnessBackgroundViewController;

@interface TUIKeyboardBrightnessModule : NSObject <CCUIContentModule>

@property (readonly, nonatomic) TUIKeyboardBrightnessModuleViewController *contentViewController;
@property (readonly, nonatomic) TUIKeyboardBrightnessBackgroundViewController *backgroundViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)contentViewControllerForContext:(id)a0;
- (void).cxx_destruct;
- (id)backgroundViewControllerForContext:(id)a0;

@end
