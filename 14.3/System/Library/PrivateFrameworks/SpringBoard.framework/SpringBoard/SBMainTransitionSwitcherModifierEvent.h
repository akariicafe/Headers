@class NSString, SBAppLayout, NSSet, NSArray, SBBannerUnfurlSourceContext, NSMutableDictionary;

@interface SBMainTransitionSwitcherModifierEvent : SBTransitionSwitcherModifierEvent {
    NSMutableDictionary *_appLayoutToRemovalContext;
}

@property (nonatomic) BOOL fromAppLayoutWantsExclusiveForeground;
@property (nonatomic) BOOL toAppLayoutWantsExclusiveForeground;
@property (retain, nonatomic) SBAppLayout *fromFloatingAppLayout;
@property (nonatomic) long long fromFloatingConfiguration;
@property (nonatomic) BOOL fromFloatingSwitcherVisible;
@property (retain, nonatomic) SBAppLayout *toFloatingAppLayout;
@property (nonatomic) long long toFloatingConfiguration;
@property (nonatomic) BOOL toFloatingSwitcherVisible;
@property (copy, nonatomic) NSString *fromAppExposeBundleID;
@property (copy, nonatomic) NSString *toAppExposeBundleID;
@property (nonatomic) unsigned long long fromInlineAppExposeRoles;
@property (nonatomic) unsigned long long toInlineAppExposeRoles;
@property (copy, nonatomic) SBBannerUnfurlSourceContext *bannerUnfurlSourceContext;
@property (nonatomic) BOOL prefersCrossfadeTransition;
@property (copy, nonatomic) NSSet *fromAppLayoutsPendingTermination;
@property (nonatomic, getter=isGestureInitiated) BOOL gestureInitiated;
@property (nonatomic, getter=isDragAndDropTransition) BOOL dragAndDropTransition;
@property (nonatomic, getter=isBreadcrumbTransition) BOOL breadcrumbTransition;
@property (nonatomic, getter=isInlineAppExposeTransition) BOOL inlineAppExposeTransition;
@property (nonatomic, getter=isMorphToPiPTransition) BOOL morphToPiPTransition;
@property (nonatomic, getter=isMorphFromPiPTransition) BOOL morphFromPiPTransition;
@property (nonatomic, getter=isContinuityTransition) BOOL continuityTransition;
@property (nonatomic, getter=isBannerUnfurlTransition) BOOL bannerUnfurlTransition;
@property (nonatomic, getter=isIconZoomDisabled) BOOL iconZoomDisabled;
@property (nonatomic, getter=isSpotlightTransition) BOOL spotlightTransition;
@property (readonly, copy, nonatomic) NSArray *appLayoutsWithRemovalContexts;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (long long)type;
- (void)setRemovalContext:(id)a0 forAppLayout:(id)a1;
- (id)removalContextForAppLayout:(id)a0;

@end
