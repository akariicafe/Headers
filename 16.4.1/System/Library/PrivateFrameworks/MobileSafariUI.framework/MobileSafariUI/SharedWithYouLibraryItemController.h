@class UIViewController;

@interface SharedWithYouLibraryItemController : LibraryItemController {
    UIViewController *_viewController;
}

- (BOOL)isSelected;
- (id)viewController;
- (void).cxx_destruct;
- (void)updateListContentConfiguration:(id)a0;
- (void)didSelectItem;

@end
