@class NSString, SBAppLayout;

@interface SBSwitcherLayoutTransitionNotes : NSObject <BSDescriptionProviding>

@property (readonly, weak, nonatomic) SBAppLayout *fromAppLayout;
@property (readonly, nonatomic) BOOL fromSwitcher;
@property (readonly, nonatomic) BOOL fromApp;
@property (readonly, nonatomic) BOOL fromHomeScreen;
@property (readonly, nonatomic) BOOL fromManyApps;
@property (readonly, weak, nonatomic) SBAppLayout *inAppLayout;
@property (readonly, nonatomic) BOOL inAnySwitcher;
@property (readonly, nonatomic) BOOL inHomeScreen;
@property (readonly, nonatomic) BOOL inApp;
@property (readonly, nonatomic) BOOL inManyApps;
@property (readonly, nonatomic) BOOL fromHomeScreenToApp;
@property (readonly, nonatomic) BOOL fromAppToHomeScreen;
@property (readonly, nonatomic) BOOL stableInHomeScreen;
@property (readonly, nonatomic) BOOL stableInAppOrMovingBetweenSingleApp;
@property (readonly, nonatomic) BOOL stableInSameApp;
@property (readonly, nonatomic) BOOL changingApps;
@property (readonly, nonatomic) BOOL movingToSingleApp;
@property (readonly, nonatomic) BOOL movingToManyApps;
@property (readonly, nonatomic) BOOL movingFromManyApps;
@property (readonly, nonatomic) BOOL isPIPRestore;
@property (readonly, nonatomic) BOOL isSystemGesture;
@property (readonly, nonatomic) BOOL isHomeButtonInitiated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFromPreviousState:(id)a0 currentLayoutState:(id)a1 transitionRequest:(id)a2;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;

@end
