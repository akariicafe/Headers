@class UIStackView, GEOMapItemAttribution, UIImageView, NSString, UIScrollView, UIButton;
@protocol MKPictureItemContainerAnalyticsDelegate, MKPictureItemContainerDelegate, GEOPictureItemContainer, MKPlaceViewControllerPresentingProtocol;

@interface MKPictureItemContainerViewController : UIViewController <UIScrollViewDelegate, MKPlacePhotoGalleryViewControllerDelegate, UIViewControllerTransitioningDelegate, MKPhotoGalleryTransitionAnimator>

@property (readonly, nonatomic) id<GEOPictureItemContainer> pictureItemContainer;
@property (readonly, nonatomic) GEOMapItemAttribution *attribution;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIStackView *stackView;
@property (nonatomic) struct CGPoint { double x; double y; } beginAnalyticsScrollingPoint;
@property (retain, nonatomic) UIImageView *imageViewForTransition;
@property (retain, nonatomic) UIButton *previousPageButton;
@property (retain, nonatomic) UIButton *nextPageButton;
@property (nonatomic, getter=isActive) BOOL hoverActive;
@property (weak, nonatomic) id<MKPictureItemContainerAnalyticsDelegate> analyticsDelegate;
@property (weak, nonatomic) id<MKPlaceViewControllerPresentingProtocol> presentingProtocol;
@property (weak, nonatomic) id<MKPictureItemContainerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)animationControllerForDismissedController:(id)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)placePhotoGalleryImageViewForPhotoAtIndex:(unsigned long long)a0;
- (void)placePhotoGallery:(id)a0 willCloseAtIndex:(unsigned long long)a1;
- (void)placePhotoGalleryDidFinishDismissing:(id)a0;
- (void)photoGalleryTransitionAnimatorDidFinishAnimation;
- (void)updateUIForTheme:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)infoCardThemeChanged;
- (void)didTapOnPictureItemView:(id)a0;
- (void)scrollToNext;
- (void)applyCornerRadius;
- (void)addControlButtons;
- (void)downloadImageForVisiblePictureItemViews;
- (void)updateChevronVisibility;
- (id)visiblePictureItemViews;
- (void)scrollToPrevious;
- (void)adjustScrollIndexByOffset:(long long)a0;
- (id)initWithPictureItemContainer:(id)a0 attribution:(id)a1;

@end
