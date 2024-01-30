@class MUAMSResultProvider, UIView, MKMapItem, MUPresentationOptions, NSString, NSMutableDictionary, NSMutableArray, NSMutableSet, MUPlaceDataAvailability, MUPlaceActionManager;
@protocol MUPlaceEnrichmentSectionContextMenuDelegate, MUExternalActionHandling, MUPlaceCallToActionSectionControllerDelegate, MUPlaceEnrichmentSectionAnalyticsDelegate, MUPlaceEnrichmentDataProvider;

@interface MUPlaceEnrichmentActionManager : NSObject <MUPlaceEnrichmentActionHandler>

@property (retain, nonatomic) MUPlaceActionManager *placeActionManager;
@property (retain, nonatomic) id<MUPlaceEnrichmentDataProvider> enrichmentDataProvider;
@property (retain, nonatomic) MKMapItem *mapItem;
@property (retain, nonatomic) MUPlaceDataAvailability *dataAvailability;
@property (retain, nonatomic) NSMutableSet *supportedActions;
@property (weak, nonatomic) id<MUPlaceCallToActionSectionControllerDelegate> callToActionDelegate;
@property (weak, nonatomic) id<MUPlaceEnrichmentSectionContextMenuDelegate> contextMenuDelegate;
@property (weak, nonatomic) id<MUExternalActionHandling> externalActionHandler;
@property (weak, nonatomic) id<MUPlaceEnrichmentSectionAnalyticsDelegate> analyticsDelegate;
@property (retain, nonatomic) NSMutableDictionary *externalActionsPairs;
@property (retain, nonatomic) NSMutableArray *externalActionsControllers;
@property (copy, nonatomic) id /* block */ onActionUpdate;
@property (retain, nonatomic) MUPresentationOptions *presentationOptions;
@property (retain, nonatomic) MUAMSResultProvider *amsResultProvider;
@property (retain, nonatomic) UIView *sourceView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)addPhotoAction:(id)a0;
- (id)supportedPlaceEnrichmentActions;
- (id)adamIDForAppCategory:(id)a0;
- (void)addExternalActionsAsSupportedActions:(id)a0;
- (void)configureWithEnrichmentDataProvider:(id)a0 presentationOptions:(id)a1;
- (void)contextMenuAction:(id)a0;
- (id)dictionaryForAction:(id)a0;
- (void)directionsAction:(id)a0;
- (void)getAppAction:(id)a0;
- (id)initWithPlaceActionManager:(id)a0 mapItem:(id)a1 dataAvailability:(id)a2 amsResultProvider:(id)a3 callToActionDelegate:(id)a4 contextMenuDelegate:(id)a5 externalActionHandler:(id)a6 analyticsDelegate:(id)a7 onActionUpdate:(id /* block */)a8;
- (void)layoutActionsUsingArguments:(id)a0 completion:(id /* block */)a1;
- (void)performActionUsingArguments:(id)a0 completion:(id /* block */)a1;
- (void)ratePlaceAction:(id)a0;

@end
