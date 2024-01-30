@class HFItem, HFUserPhotosLibraryItemProvider, HMHome, NSArray, HFStaticItemProvider, HFItemProvider, HFStaticItem, HFDemoModeFaceRecognitionDataSource;

@interface HUFaceRecognitionLibraryListItemManager : HFItemManager

@property (retain, nonatomic) HFItem *allowFacialRecognitionItem;
@property (readonly, nonatomic) HMHome *overrideHome;
@property (retain, nonatomic) HFStaticItemProvider *staticItemProvider;
@property (retain, nonatomic) HFUserPhotosLibraryItemProvider *userPhotosLibraryItemProvider;
@property (retain, nonatomic) HFItemProvider *recentEventsItemProvider;
@property (retain, nonatomic) HFStaticItem *knownToHomeItem;
@property (retain, nonatomic) HFDemoModeFaceRecognitionDataSource *demoDataSource;
@property (retain, nonatomic) NSArray *coalescedPersonEvents;
@property (nonatomic) BOOL didSendAnalyticsEvent;
@property (nonatomic) unsigned long long recentsLimit;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (id)_homeFuture;
- (id)initWithDelegate:(id)a0 sourceItem:(id)a1;
- (id)initWithHome:(id)a0 delegate:(id)a1;
- (void)sendAnalyticsEvent;

@end
