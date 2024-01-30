@class UIView, MUPlaceSectionFooterViewModel, NSString, NSArray, MUPlaceSectionHeaderViewModel, MUPlaceTilesView, UIImageView, MUPunchoutViewModel, UIViewController, MUPlacePhotoGalleryViewController, MUPlaceSectionView, MKUGCCallToActionViewAppearance;
@protocol MUPlacePictureItemSectionControllerDelegate, MUInfoCardAnalyticsDelegate, GEOAnnotatedItemList;

@interface MUPlacePictureItemSectionController : MUPlaceSectionController <MUPlaceTilesViewDelegate, MUPlacePhotoGalleryViewControllerDelegate, UIViewControllerTransitioningDelegate, MUPhotoGalleryTransitionAnimator, MUScrollAnalyticActionObserving, MUPlaceSectionControlling> {
    id<GEOAnnotatedItemList> _annotatedList;
    MUPlaceSectionView *_sectionView;
    MUPlaceTilesView *_tilesView;
    UIImageView *_imageViewForTransition;
    MUPunchoutViewModel *_attributionViewModel;
    MUPlacePhotoGalleryViewController *_photoGalleryViewController;
    UIViewController *_presentingViewController;
}

@property (weak, nonatomic) id<MUPlacePictureItemSectionControllerDelegate> pictureItemDelegate;
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

- (id)animationControllerForDismissedController:(id)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (void).cxx_destruct;
- (void)_setupSubviews;
- (void)_captureUserAction:(int)a0;
- (void)_performPunchout;
- (void)_presentPhotoGalleryForPhotoIndex:(unsigned long long)a0;
- (int)analyticsModuleType;
- (id)initWithMapItem:(id)a0 annotatedList:(id)a1 presentingViewController:(id)a2;
- (BOOL)isImpressionable;
- (void)performInstrumentationForScrollLeft;
- (void)performInstrumentationForScrollRight;
- (void)photoGalleryTransitionAnimatorDidFinishAnimation;
- (void)placePhotoGallery:(id)a0 willCloseAtIndex:(unsigned long long)a1;
- (id)placePhotoGalleryImageViewForPhotoAtIndex:(unsigned long long)a0;
- (void)placeTileCollectionView:(id)a0 didTapOnAccessoryViewModel:(id)a1;
- (void)placeTileCollectionView:(id)a0 didTapOnViewModel:(id)a1;
- (void)placeTileCollectionViewDidScroll:(id)a0;

@end
