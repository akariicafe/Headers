@class UIViewController;

@interface FromFriendsLibraryItemController : LibraryItemController {
    UIViewController *_viewController;
}

- (id)viewController;
- (void).cxx_destruct;
- (BOOL)isSelected;
- (BOOL)isHidden;
- (void)updateListContentConfiguration:(id)a0;
- (void)didSelectItem;

@end
