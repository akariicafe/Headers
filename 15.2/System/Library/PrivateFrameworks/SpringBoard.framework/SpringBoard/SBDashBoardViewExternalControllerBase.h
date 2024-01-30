@class NSString, NSSet, NSArray, _UILegibilitySettings;
@protocol UICoordinateSpace;

@interface SBDashBoardViewExternalControllerBase : CSCoverSheetViewControllerBase <CSExternalAppearanceProviding, CSExternalBehaviorProviding, CSExternalPresentationProviding, CSExternalEventHandling>

@property (readonly, nonatomic, getter=isExternalToDashBoard) BOOL externalToDashBoard;
@property (readonly, copy, nonatomic) NSString *appearanceIdentifier;
@property (readonly, copy, nonatomic) NSSet *components;
@property (readonly, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *coverSheetIdentifier;
@property (readonly, nonatomic) long long participantState;
@property (readonly, nonatomic) long long scrollingStrategy;
@property (readonly, nonatomic) long long notificationBehavior;
@property (readonly, nonatomic) unsigned long long restrictedCapabilities;
@property (readonly, nonatomic) long long proximityDetectionMode;
@property (readonly, weak, nonatomic) id<UICoordinateSpace> presentationCoordinateSpace;
@property (readonly, copy, nonatomic) NSArray *presentationRegions;

- (void)_registerAsExternalProviderIfNeeded;
- (void)viewWillDisappear:(BOOL)a0;
- (id)_presenter;
- (void)_unregisterAsExternalProvider;
- (void)viewDidAppear:(BOOL)a0;
- (void)conformsToCSExternalBehaviorProviding;

@end
