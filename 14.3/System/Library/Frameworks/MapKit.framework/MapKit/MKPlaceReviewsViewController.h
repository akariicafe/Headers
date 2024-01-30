@class MKMapItem, NSArray, NSString, NSMutableArray, MKPlaceReviewAvatarGenerator;
@protocol MKPlaceCardActionControllerDelegate, MKPlaceCardReviewsControllerDelegate;

@interface MKPlaceReviewsViewController : MKPlaceSectionViewController <_MKInfoCardChildViewControllerAnalyticsDelegate, MKModuleViewControllerProtocol>

@property (retain, nonatomic) MKPlaceReviewAvatarGenerator *avatarGenerator;
@property (retain, nonatomic) NSArray *userSnippets;
@property (retain, nonatomic) NSMutableArray *cells;
@property (retain, nonatomic) MKMapItem *mapItem;
@property (weak, nonatomic) id<MKPlaceCardReviewsControllerDelegate, MKPlaceCardActionControllerDelegate> reviewsControllerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (unsigned long long)reviewsCount;
- (id)reviewAtIndex:(unsigned long long)a0;
- (void)sectionView:(id)a0 didSelectRow:(id)a1 atIndex:(unsigned long long)a2;
- (id)infoCardChildPossibleActions;
- (id)infoCardChildUnactionableUIElements;
- (void)_viewAllReviews;
- (void)_showReview:(id)a0 index:(unsigned long long)a1;
- (void)loadCells;
- (BOOL)_canShowWhileLocked;
- (void)_updateAttribution;
- (void)viewDidLoad;

@end
