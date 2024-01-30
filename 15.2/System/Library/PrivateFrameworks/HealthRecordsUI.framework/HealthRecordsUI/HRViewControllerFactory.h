@interface HRViewControllerFactory : NSObject <HRCategoryViewControllerFactory, HRConceptViewControllerFactory>

@property (class, nonatomic, readonly) HRViewControllerFactory *shared;

- (id)makeViewControllerForCategory:(id)a0 usingProfile:(id)a1;
- (id)makeTimelineViewControllerForCategory:(id)a0 showsInitialSearchBar:(BOOL)a1 usingProfile:(id)a2 filterPredicatesByType:(id)a3;
- (id)makeAlphabeticalViewControllerForCategory:(id)a0 usingProfile:(id)a1;
- (id)makeOutOfRangeLabsViewControllerUsingProfile:(id)a0;
- (id)makeViewControllerForConcept:(id)a0 fromCategory:(id)a1 highlightedRecordId:(id)a2 usingProfile:(id)a3;
- (void).cxx_destruct;
- (id)init;
- (id)makeAccountDetailViewControllerForAccount:(id)a0 profile:(id)a1;
- (id)makeDetailViewControllerForRecord:(id)a0 usingProfile:(id)a1;
- (id)makeViewControllerForRecord:(id)a0 usingProfile:(id)a1;
- (id)makeOnboadingTileViewControllerUsing:(id)a0;
- (id)makeSettingsViewControllerUsing:(id)a0;

@end
