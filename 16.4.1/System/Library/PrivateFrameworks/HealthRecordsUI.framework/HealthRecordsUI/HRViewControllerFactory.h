@interface HRViewControllerFactory : NSObject <HRCategoryViewControllerFactory>

@property (class, nonatomic, readonly) HRViewControllerFactory *shared;

- (id)makeAlphabeticalViewControllerForCategory:(id)a0 usingProfile:(id)a1;
- (id)makeOutOfRangeLabsViewControllerUsingProfile:(id)a0;
- (id)makeTimelineViewControllerForCategory:(id)a0 showsInitialSearchBar:(BOOL)a1 usingProfile:(id)a2 filterPredicatesByType:(id)a3;
- (id)makeViewControllerForCategory:(id)a0 usingProfile:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (id)makeAccountDetailViewControllerForAccount:(id)a0 profile:(id)a1;
- (id)makeDetailViewControllerForRecord:(id)a0 usingProfile:(id)a1;
- (id)makeOnboadingTileViewControllerUsing:(id)a0;
- (id)makeViewControllerForRecord:(id)a0 usingProfile:(id)a1;

@end
