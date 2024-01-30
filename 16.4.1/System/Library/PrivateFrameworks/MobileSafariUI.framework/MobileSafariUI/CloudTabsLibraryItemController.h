@class UIViewController;

@interface CloudTabsLibraryItemController : LibraryItemController {
    UIViewController *_viewController;
}

- (BOOL)isSelected;
- (id)viewController;
- (BOOL)isHidden;
- (void).cxx_destruct;
- (void)updateListContentConfiguration:(id)a0;
- (void)didSelectItem;

@end
