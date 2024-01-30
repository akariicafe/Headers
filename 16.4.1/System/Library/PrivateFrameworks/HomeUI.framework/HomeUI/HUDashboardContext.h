@class NSString, HFAccessoryTypeGroup;

@interface HUDashboardContext : NSObject {
    void /* unknown type, empty encoding */ overrideDashboardTitle;
    void /* unknown type, empty encoding */ type;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ home;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ room;
@property (nonatomic, readonly) HFAccessoryTypeGroup *accessoryTypeGroup;
@property (nonatomic, readonly) NSString *typeDescriptionForAnalytics;
@property (nonatomic, readonly) NSString *menuEditActionTitle;
@property (nonatomic, readonly) NSString *menuEditActionTitleLocalizationKey;
@property (nonatomic) void /* unknown type, empty encoding */ accessoryGroupingStyle;
@property (nonatomic) void /* unknown type, empty encoding */ accessoryLikeItemObjectLevel;
@property (nonatomic) void /* unknown type, empty encoding */ allowsAdding;
@property (nonatomic) void /* unknown type, empty encoding */ allowsAnnounce;
@property (nonatomic) void /* unknown type, empty encoding */ allowsEditing;
@property (nonatomic) void /* unknown type, empty encoding */ allowsHomeNavigation;
@property (nonatomic) void /* unknown type, empty encoding */ includePredictedScenes;
@property (nonatomic) void /* unknown type, empty encoding */ backgroundStyle;
@property (nonatomic) void /* unknown type, empty encoding */ scenePresentationStyle;
@property (nonatomic) void /* unknown type, empty encoding */ cameraPresentationStyle;
@property (nonatomic) void /* unknown type, empty encoding */ filterPresentationStyle;
@property (nonatomic, copy) NSString *overrideDashboardTitle;
@property (nonatomic) void /* unknown type, empty encoding */ shouldDelayItemUpdatesForViewVisibility;
@property (nonatomic) void /* unknown type, empty encoding */ shouldHideEmptySections;
@property (nonatomic) void /* unknown type, empty encoding */ shouldHidePlaceholderService;
@property (nonatomic) void /* unknown type, empty encoding */ shouldIncludeRoomInAccessoryNames;

+ (id)camerasDashboardWithTitle:(id)a0 forHome:(id)a1;
+ (id)categoryDashboardForAccessoryTypeGroup:(id)a0 home:(id)a1 room:(id)a2;
+ (id)homeDashboardForHome:(id)a0;
+ (id)roomDashboardForRoom:(id)a0;
+ (id)scenesDashboardWithTitle:(id)a0 forHome:(id)a1;
+ (id)speakersAndTVsDashboardWithTitle:(id)a0 forHome:(id)a1;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)accessoryRepresentableHasStandardTileRepresentation:(id)a0;
- (BOOL)canPresentDetailsViewControllerForSectionWithIdentifier:(id)a0;
- (BOOL)canShowHeaderForSectionWithIdentifier:(id)a0;
- (long long)maximumNumberOfItemsInSectionWithIdentifier:(id)a0;
- (BOOL)shouldCreateModule:(Class)a0;
- (BOOL)shouldHideAccessoryRepresentable:(id)a0;
- (BOOL)shouldHideHomeKitObject:(id)a0;
- (BOOL)shouldHideInRoomSectionForAccessoryRepresentableItem:(id)a0;
- (BOOL)shouldHideSectionWithIdentifier:(id)a0;
- (BOOL)shouldHideStatusItemClass:(Class)a0;

@end
