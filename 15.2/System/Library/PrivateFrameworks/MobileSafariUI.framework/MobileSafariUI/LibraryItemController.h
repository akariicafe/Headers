@class LibrarySectionController, UISwipeActionsConfiguration, UIAction, NSArray, UIContextMenuConfiguration, UIViewController, LibraryConfiguration;

@interface LibraryItemController : NSObject

@property (readonly, weak) LibrarySectionController *sectionController;
@property (readonly, nonatomic) LibraryConfiguration *configuration;
@property (readonly, nonatomic) BOOL isSelected;
@property (readonly, nonatomic) BOOL isHidden;
@property (readonly, nonatomic) BOOL shouldPersistSelection;
@property (readonly, nonatomic) BOOL selectionFollowsFocus;
@property (readonly, nonatomic) UIAction *secondaryAction;
@property (copy, nonatomic) id /* block */ secondaryActionVisibilityProvider;
@property (retain, nonatomic) UIContextMenuConfiguration *contextMenuConfiguration;
@property (retain, nonatomic) UISwipeActionsConfiguration *swipeActionsConfiguration;
@property (readonly, nonatomic) NSArray *dragItems;
@property (readonly, nonatomic) BOOL isSpringLoaded;
@property (readonly, nonatomic) UIViewController *viewController;

- (void)contentDidChange;
- (void).cxx_destruct;
- (void)updateToolbarIfNeeded;
- (id)initWithConfiguration:(id)a0 sectionController:(id)a1;
- (void)updateListContentConfiguration:(id)a0;
- (unsigned long long)dropOperationForSession:(id)a0;
- (long long)dropIntentForSession:(id)a0;
- (void)performDropWithProposal:(id)a0 session:(id)a1;
- (void)didSelectItem;
- (void)didDeselectItem;

@end
