@class LibrarySectionController, NSArray, UISwipeActionsConfiguration, NSString, UIViewController, LibraryConfiguration;

@interface LibraryItemController : NSObject

@property (readonly, weak) LibrarySectionController *sectionController;
@property (readonly, nonatomic) LibraryConfiguration *configuration;
@property (readonly, nonatomic) BOOL isSelected;
@property (readonly, nonatomic) BOOL isHidden;
@property (readonly, nonatomic) BOOL shouldPersistSelection;
@property (readonly, nonatomic) BOOL selectionFollowsFocus;
@property (readonly, copy, nonatomic) NSArray *accessories;
@property (retain, nonatomic) UISwipeActionsConfiguration *swipeActionsConfiguration;
@property (readonly, nonatomic) BOOL hasSubitems;
@property (readonly, nonatomic) NSArray *subitems;
@property (readonly, nonatomic, getter=isExpanded) BOOL expanded;
@property (readonly, nonatomic) NSArray *dragItems;
@property (readonly, nonatomic) BOOL isSpringLoaded;
@property (readonly, copy, nonatomic) NSString *accessibilityIdentifier;
@property (readonly, nonatomic) UIViewController *viewController;

- (void)contentDidChange;
- (void).cxx_destruct;
- (void)didDeselectItem;
- (void)updateListContentConfiguration:(id)a0;
- (void)didSelectItem;
- (long long)dropIntentForSession:(id)a0;
- (unsigned long long)dropOperationForSession:(id)a0;
- (id)initWithConfiguration:(id)a0 sectionController:(id)a1;
- (void)performDropWithProposal:(id)a0 session:(id)a1;
- (void)updateToolbarIfNeeded;
- (void)willToggleExpansionState;

@end
