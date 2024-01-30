@class NSString, SearchUIMapsViewController;

@interface SearchUIMapPlaceCardSectionView : SearchUICardSectionView <NUIContainerViewDelegate, _MKPlaceViewControllerDelegate>

@property (retain) SearchUIMapsViewController *mapViewController;
@property BOOL alreadyDispatchedOnMainQueue;
@property (nonatomic) struct CGSize { double width; double height; } placecardBoundsSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tlk_updateForAppearance:(id)a0;
- (void).cxx_destruct;
- (BOOL)isReportAProblemAvailable;
- (id)setupContentView;
- (struct CGSize { double x0; double x1; })containerView:(id)a0 systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a1 forArrangedSubview:(id)a2;
- (void)containerView:(id)a0 willMeasureArrangedSubviewsFittingSize:(struct CGSize { double x0; double x1; })a1 forReason:(long long)a2;
- (void)updateTintColorProvider;
- (void)placeViewControllerDidUpdateHeight:(id)a0;
- (id)embeddedViewController;
- (void)placeViewController:(id)a0 requestPasscodeUnlockWithCompletion:(id /* block */)a1;

@end
