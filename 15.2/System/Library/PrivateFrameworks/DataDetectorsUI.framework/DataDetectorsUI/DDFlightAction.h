@class UINavigationController;

@interface DDFlightAction : DDAction {
    UINavigationController *_viewController;
}

- (id)localizedName;
- (id)viewController;
- (void).cxx_destruct;
- (int)interactionType;
- (id)iconName;
- (id)initWithURL:(id)a0 result:(struct __DDResult { } *)a1 context:(id)a2;
- (void)closePressed;
- (void)prepareViewControllerForActionController:(id)a0;
- (void)adaptForPresentationInPopover:(BOOL)a0;

@end
