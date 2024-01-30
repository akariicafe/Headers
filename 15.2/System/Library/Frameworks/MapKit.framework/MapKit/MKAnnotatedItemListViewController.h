@class GEOMapItemAttribution, NSString, UIView, UIViewController;
@protocol MKAnnotatedItemListViewControllerDelegate, _MKInfoCardAnalyticsDelegate;

@interface MKAnnotatedItemListViewController : UIViewController <MKPictureItemContainerAnalyticsDelegate, MKPictureItemContainerDelegate, MKModuleViewControllerProtocol, _MKInfoCardChildViewControllerAnalyticsDelegate>

@property (readonly, nonatomic) UIViewController *annotatedItemListViewController;
@property (readonly, nonatomic) GEOMapItemAttribution *attribution;
@property (readonly, copy, nonatomic) NSString *headerTitle;
@property (readonly, nonatomic) UIView *topHairlineSeparator;
@property (readonly, nonatomic) UIView *bottomHairlineSeparator;
@property (readonly, nonatomic) double viewControllerTopPadding;
@property (readonly, nonatomic) double viewControllerBottomPadding;
@property (readonly, nonatomic) double headerTopPadding;
@property (nonatomic, getter=isTopSeparatorHidden) BOOL topSeparatorHidden;
@property (nonatomic, getter=isBottomSeparatorHidden) BOOL bottomSeparatorHidden;
@property (weak, nonatomic) id<_MKInfoCardAnalyticsDelegate> analyticsDelegate;
@property (weak, nonatomic) id<MKAnnotatedItemListViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (id)initWithPictureItemContainer:(id)a0 title:(id)a1 attribution:(id)a2 presentingProtocol:(id)a3;
- (id)initWithTextItemContainer:(id)a0 title:(id)a1 attribution:(id)a2;
- (void)updateUIForTheme:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)openAttribution;
- (id)initWithChildViewController:(id)a0 title:(id)a1 attribution:(id)a2;
- (void)pictureItemContainerRequestsSceneActivationWithPhotoGallery:(id)a0;
- (void)infoCardThemeChanged;
- (void)captureUserAction:(int)a0;
- (id)infoCardChildPossibleActions;
- (id)infoCardChildUnactionableUIElements;

@end
