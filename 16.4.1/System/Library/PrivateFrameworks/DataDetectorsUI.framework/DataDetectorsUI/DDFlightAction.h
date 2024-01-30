@class UINavigationController;

@interface DDFlightAction : DDAction {
    UINavigationController *_viewController;
}

- (int)interactionType;
- (id)localizedName;
- (id)viewController;
- (id)iconName;
- (void).cxx_destruct;
- (void)adaptForPresentationInPopover:(BOOL)a0;
- (void)closePressed;
- (BOOL)extractAirlineCode:(id *)a0 flightNumber:(long long *)a1;
- (void)prepareViewControllerForActionController:(id)a0;
- (id)quickActionTitle;

@end
