@class UIView, MUPlaceSectionFooterViewModel, NSString, MUPlaceSectionHeaderViewModel, MUPlaceTilesView, UIImageView, MUPunchoutViewModel, MKPlacePhotoGalleryViewController, UIViewController, MUPlaceSectionView, MKUGCCallToActionViewAppearance;
@protocol MUPlacePictureItemSectionControllerDelegate, MUInfoCardAnalyticsDelegate, GEOAnnotatedItemList;

@interface MUPlacePictureItemSectionController : MUPlaceSectionController <MUPlaceTilesViewDelegate, MKPlacePhotoGalleryViewControllerDelegate, UIViewControllerTransitioningDelegate, MKPhotoGalleryTransitionAnimator, MUScrollAnalyticActionObserving, MUPlaceSectionControlling> {
    id<GEOAnnotatedItemList> _annotatedList;
    MUPlaceSectionView *_sectionView;
    MUPlaceTilesView *_tilesView;
    UIImageView *_imageViewForTransition;
    MUPunchoutViewModel *_attributionViewModel;
    MKPlacePhotoGalleryViewController *_photoGalleryViewController;
    UIViewController *_presentingViewController;
}

@property (weak, nonatomic) id<MUPlacePictureItemSectionControllerDelegate> pictureItemDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasContent;
@property (readonly, nonatomic) UIView *sectionView;
@property (readonly, nonatomic) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel;
@property (readonly, nonatomic) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property (retain, nonatomic) MKUGCCallToActionViewAppearance *submissionStatus;
@property (nonatomic, getter=isActive) BOOL active;
@property (weak, nonatomic) id<MUInfoCardAnalyticsDelegate> analyticsDelegate;
@property (readonly, nonatomic) UIViewController *sectionViewController;

- (id)animationControllerForDismissedController:(id)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)placePhotoGalleryImageViewForPhotoAtIndex:(unsigned long long)a0;
- (void)placePhotoGallery:(id)a0 willCloseAtIndex:(unsigned long long)a1;
- (void)photoGalleryTransitionAnimatorDidFinishAnimation;
- (void).cxx_destruct;
- (void)_setupSubviews;
- (int)analyticsModuleType;
- (id)initWithMapItem:(id)a0 annotatedList:(id)a1 presentingViewController:(id)a2;
- (void)placeTileCollectionView:(id)a0 didTapOnViewModel:(id)a1;
- (void)placeTileCollectionView:(id)a0 didTapOnAccessoryViewModel:(id)a1;
- (void)placeTileCollectionViewDidScroll:(id)a0;
- (void)performInstrumentationForScrollLeft;
- (void)performInstrumentationForScrollRight;
- (void)_performPunchout;
- (void)_presentPhotoGalleryForPhotoIndex:(unsigned long long)a0;
- (void)_captureUserAction:(int)a0;

@end
