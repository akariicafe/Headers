@class UIViewController, NSString, NSArray, LibraryConfiguration;
@protocol LibraryContentObserver;

@interface LibrarySectionController : NSObject

@property (readonly, nonatomic) LibraryConfiguration *configuration;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSArray *itemControllers;
@property (weak) id<LibraryContentObserver> contentObserver;
@property (weak) UIViewController *presentingViewController;
@property (readonly, nonatomic) NSArray *filteredItemControllers;

- (void)contentDidChange;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)registerItemsWithRegistration:(id)a0;
- (void)updateToolbarIfNeeded;

@end
