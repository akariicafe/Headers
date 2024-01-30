@class UIView, MUPlaceSectionFooterViewModel, NSString, NSArray, MUPlaceSectionHeaderViewModel, MUPlaceReviewAvatarGenerator, MUScrollableStackView, MUPlaceRatingReviewTitleBuilder, NSMutableArray, UIViewController, MUPlaceSectionView, MKUGCCallToActionViewAppearance;
@protocol MUInfoCardAnalyticsDelegate, MURatingsAndReviewsSectionControllerDelegate;

@interface MURatingsAndReviewsSectionController : MUPlaceSectionController <MUPlaceCollectionPullQuotePlatterViewDelegate, MUPlaceSectionControlling> {
    MUScrollableStackView *_contentStackView;
    MUPlaceSectionView *_sectionView;
    MUPlaceReviewAvatarGenerator *_avatarGenerator;
    NSMutableArray *_focusItems;
    MUPlaceRatingReviewTitleBuilder *_titleBuilder;
}

@property (weak, nonatomic) id<MURatingsAndReviewsSectionControllerDelegate> actionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasContent;
@property (readonly, nonatomic) UIView *sectionView;
@property (readonly, nonatomic) NSArray *sectionViews;
@property (readonly, nonatomic) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel;
@property (readonly, nonatomic) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property (retain, nonatomic) MKUGCCallToActionViewAppearance *submissionStatus;
@property (nonatomic, getter=isActive) BOOL active;
@property (weak, nonatomic) id<MUInfoCardAnalyticsDelegate> analyticsDelegate;
@property (readonly, nonatomic) UIViewController *sectionViewController;

- (id)initWithMapItem:(id)a0;
- (void).cxx_destruct;
- (id)infoCardChildPossibleActions;
- (void)_addAppleRatingsCategoryTileIfNeeded:(id)a0;
- (void)_addHorizontalTileToContentStackView:(id)a0 items:(id)a1;
- (void)_addPlaceCollectionPullQuotesIfNeeded:(id)a0;
- (void)_addRatingSnippets:(id)a0 withCellItems:(id)a1;
- (void)_addUserReviewCategoryTilesIfNeeded:(id)a0;
- (void)_sectionHeaderAccessoryTapped;
- (void)_setupRatingRows;
- (int)analyticsModuleType;
- (BOOL)isImpressionable;
- (void)pullQuoteViewDidTapMore:(id)a0;

@end
