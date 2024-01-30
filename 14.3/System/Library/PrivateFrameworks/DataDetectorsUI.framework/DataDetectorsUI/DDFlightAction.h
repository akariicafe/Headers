@class UINavigationController;

@interface DDFlightAction : DDAction {
    UINavigationController *_viewController;
}

- (void).cxx_destruct;
- (id)icon;
- (id)localizedName;
- (id)viewController;
- (int)interactionType;
- (id)initWithURL:(id)a0 result:(struct __DDResult { } *)a1 context:(id)a2;
- (void)closePressed;
- (void)prepareViewControllerForActionController:(id)a0;
- (void)adaptForPresentationInPopover:(BOOL)a0;

@end
