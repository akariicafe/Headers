@class NSString, SearchUIMapsViewController;

@interface SearchUIMapPlaceCardSectionView : SearchUICardSectionView <NUIContainerViewDelegate, MUPlaceViewControllerDelegate>

@property (retain) SearchUIMapsViewController *mapViewController;
@property BOOL alreadyDispatchedOnMainQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)placeViewController:(id)a0 requestPasscodeUnlockWithCompletion:(id /* block */)a1;
- (void)tlk_updateForAppearance:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })containerView:(id)a0 systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a1 forArrangedSubview:(id)a2;
- (void)containerView:(id)a0 willMeasureArrangedSubviewsFittingSize:(struct CGSize { double x0; double x1; })a1 forReason:(long long)a2;
- (id)embeddedViewController;
- (void)placeViewControllerDidUpdateHeight:(id)a0;
- (id)setupContentView;
- (void)updateTintColorProvider;
- (BOOL)isReportAProblemAvailable;

@end
