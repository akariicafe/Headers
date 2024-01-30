@class UIColor, NSArray, NSMutableDictionary, NAFuture, NSString, CPNavigationAlert, CPBarButton;
@protocol CPMapTemplateDelegate, CPNavigationSessionProviding, CPBannerProviding;

@interface CPMapTemplate : CPTemplate <CPMapButtonDelegate, CPMapClientTemplateDelegate, CPBannerDelegate, CPNavigationAlertUpdating, CPBarButtonProviding>

@property (retain, nonatomic) NSMutableDictionary *postedBannerObjects;
@property (retain, nonatomic) NAFuture *navigationSessionProviderFuture;
@property (retain, nonatomic) NAFuture *templateProviderFuture;
@property (retain, nonatomic) id<CPBannerProviding> bannerProvider;
@property (retain, nonatomic) id<CPNavigationSessionProviding> navigationSessionProvider;
@property (readonly, copy, nonatomic) NSArray *tripPreviews;
@property (retain, nonatomic) UIColor *guidanceBackgroundColor;
@property (nonatomic) unsigned long long tripEstimateStyle;
@property (retain, nonatomic) NSArray *mapButtons;
@property (nonatomic) BOOL automaticallyHidesNavigationBar;
@property (nonatomic) BOOL hidesButtonsWithNavigationBar;
@property (weak, nonatomic) id<CPMapTemplateDelegate> mapDelegate;
@property (readonly, nonatomic, getter=isPanningInterfaceVisible) BOOL panningInterfaceVisible;
@property (readonly, nonatomic) CPNavigationAlert *currentNavigationAlert;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSArray *leadingNavigationBarButtons;
@property (retain, nonatomic) NSArray *trailingNavigationBarButtons;
@property (retain, nonatomic) CPBarButton *backButton;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)clientNavigationAlertDidAppear:(id)a0;
- (long long)_displayStyleForManeuver:(id)a0;
- (void)_postBannerIfNecessaryForManeuver:(id)a0;
- (void)_postBannerIfNecessaryForNavigationAlert:(id)a0;
- (void)_resolveTrip:(id)a0 routeChoice:(id)a1 completion:(id /* block */)a2;
- (void)_updateBannerIfNecessaryForManeuver:(id)a0 travelEstimates:(id)a1;
- (void)_updateNavigationAlert:(id)a0;
- (void)bannerDidAppearWithIdentifier:(id)a0;
- (void)bannerDidDisappearWithIdentifier:(id)a0;
- (void)bannerTappedWithIdentifier:(id)a0;
- (void)clientNavigationAlertDidDisappear:(id)a0 context:(unsigned long long)a1;
- (void)clientNavigationAlertWillAppear:(id)a0;
- (void)clientNavigationAlertWillDisappear:(id)a0 context:(unsigned long long)a1;
- (void)clientPanBeganWithDirection:(long long)a0;
- (void)clientPanEndedWithDirection:(long long)a0;
- (void)clientPanGestureBegan;
- (void)clientPanGestureEndedWithVelocity:(struct CGPoint { double x0; double x1; })a0;
- (void)clientPanGestureWithDeltaPoint:(struct CGPoint { double x0; double x1; })a0 velocity:(struct CGPoint { double x0; double x1; })a1;
- (void)clientPanViewDidAppear;
- (void)clientPanViewDidDisappear;
- (void)clientPanViewWillDisappear;
- (void)clientPanWithDirection:(long long)a0;
- (void)clientTripAlreadyStartedException;
- (void)clientTripCanceledByExternalNavigation;
- (void)dismissNavigationAlertAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)dismissPanningInterfaceAnimated:(BOOL)a0;
- (void)handleActionForControlIdentifier:(id)a0;
- (void)hideTripPreviews;
- (BOOL)mapButton:(id)a0 setFocusedImage:(id)a1;
- (BOOL)mapButton:(id)a0 setHidden:(BOOL)a1;
- (BOOL)mapButton:(id)a0 setImageSet:(id)a1;
- (void)presentNavigationAlert:(id)a0 animated:(BOOL)a1;
- (void)previewTripIdentifier:(id)a0 usingRouteIdentifier:(id)a1;
- (void)showPanningInterfaceAnimated:(BOOL)a0;
- (void)showRouteChoicesPreviewForTrip:(id)a0 textConfiguration:(id)a1;
- (void)showTripPreviews:(id)a0 selectedTrip:(id)a1 textConfiguration:(id)a2;
- (void)showTripPreviews:(id)a0 textConfiguration:(id)a1;
- (id)startNavigationSessionForTrip:(id)a0;
- (void)startTripIdentifier:(id)a0 usingRouteIdentifier:(id)a1;
- (void)updateTravelEstimates:(id)a0 forTrip:(id)a1;
- (void)updateTravelEstimates:(id)a0 forTrip:(id)a1 withTimeRemainingColor:(unsigned long long)a2;

@end
