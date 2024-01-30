@class UIStackView, NSString, NSArray, MKPlaceSectionRowView, MKOverallRatingHeaderView;

@interface MKAppleRatingsViewController : MKPlaceSectionViewController <MKModuleViewControllerProtocol> {
    NSArray *_ratingCategories;
    MKPlaceSectionRowView *_containerView;
    MKOverallRatingHeaderView *_overallHeaderView;
    UIStackView *_ratingCategoryStackView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
