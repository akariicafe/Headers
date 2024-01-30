@class SHSheetActivityItemsManager, NSString, NSArray, UISDShareSheetSessionConfiguration, LPLinkMetadata, UIActivityViewController, UIViewController, SHSheetActivitiesManager;
@protocol UIActivityViewControllerObjectManipulationDelegate, SHSheetUIPeopleSuggestion, SHSheetSessionDelegate;

@interface SHSheetSession : NSObject <SHSheetActivitiesManagerDelegate, SHSheetSessionInterface> {
    struct { BOOL respondsToCustomizationAvailable; BOOL respondsToCustomLocalizedActionTitle; BOOL respondsToCustomActionViewController; } _objectManipulationDelegateFlags;
}

@property (copy, nonatomic) NSArray *activityTypesToCreateInShareService;
@property (copy, nonatomic) NSArray *includedActivityTypes;
@property (copy, nonatomic) NSArray *excludedActivityTypes;
@property (copy, nonatomic) NSArray *activityTypeOrder;
@property (nonatomic) long long excludedActivityCategories;
@property (nonatomic) BOOL allowsEmbedding;
@property (nonatomic) BOOL shouldSuggestFamilyMembers;
@property (nonatomic) BOOL showKeyboardAutomatically;
@property (nonatomic) BOOL whitelistActionActivitiesOnly;
@property (nonatomic) BOOL shouldSkipPeopleSuggestions;
@property (nonatomic) long long sharingStyle;
@property (retain, nonatomic) LPLinkMetadata *photosHeaderMetadata;
@property (nonatomic) BOOL isCloudSharing;
@property (nonatomic) BOOL configureForCloudSharing;
@property (nonatomic) BOOL configureForPhotosEdit;
@property (nonatomic) BOOL hideHeaderView;
@property (retain, nonatomic) NSString *topContentSectionText;
@property (nonatomic) BOOL wantsObjectManipulation;
@property (nonatomic) BOOL isAirdropOnly;
@property (weak, nonatomic) id<UIActivityViewControllerObjectManipulationDelegate> objectManipulationDelegate;
@property (readonly, nonatomic) long long numberOfVisibleSharingActivities;
@property (readonly, nonatomic) long long numberOfVisibleActionActivities;
@property (weak, nonatomic) id<SHSheetSessionDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, weak, nonatomic) UIActivityViewController *activityViewController;
@property (readonly, nonatomic) SHSheetActivitiesManager *activitiesManager;
@property (readonly, nonatomic) SHSheetActivityItemsManager *activityItemsManager;
@property (retain, nonatomic) UISDShareSheetSessionConfiguration *configuration;
@property (nonatomic) BOOL didExpand;
@property (readonly, copy, nonatomic) NSArray *heroActionActivityTypes;
@property (readonly, nonatomic) BOOL slotsRenderingDisabled;
@property (readonly, nonatomic) BOOL showHeroActionsHorizontally;
@property (copy, nonatomic) NSArray *selectedAssetIdentifiers;
@property (nonatomic) BOOL isContentManaged;
@property (retain, nonatomic) id<SHSheetUIPeopleSuggestion> currentPeopleSuggestion;
@property (readonly, copy, nonatomic) NSArray *customizationGroups;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *metadataValuesForLinkPresentation;
@property (readonly, copy, nonatomic) NSString *customOptionsTitle;
@property (readonly, nonatomic) UIViewController *customOptionsViewController;

- (void)updateWithContext:(id)a0;
- (BOOL)activitiesManager:(id)a0 shouldShowSystemActivityType:(id)a1;
- (id)initWithContext:(id)a0;
- (void)_configureWithContext:(id)a0;
- (void)_updateObjectManipulationSupport;
- (id)_activityConfigurationsForActivities:(id)a0;
- (id)_configurationForActivity:(id)a0;
- (void).cxx_destruct;
- (id)createDiscoveryContext;
- (id)createActivityMatchingContext;
- (id)createShareServiceUIConfiguration;

@end
