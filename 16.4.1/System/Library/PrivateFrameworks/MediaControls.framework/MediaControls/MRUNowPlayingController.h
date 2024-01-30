@class NSHashTable, NSString, MRUNowPlayingQueueHandoffCoordinator, MRUEndpointController, MRUMediaSuggestionsController, MRUTransportControlItem, MRUTVRemoteController, MRUMetadataController, MRUMRMetadataDataSource;
@protocol MRUMetadataDataSource;

@interface MRUNowPlayingController : NSObject <MRUEndpointControllerObserver, MRUTVRemoteControllerDelegate, MRUMetadataControllerObserver, MRUMediaSuggestionsControllerDelegate, MRUNowPlayingQueueHandoffCoordinatorDelegate>

@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) MRUMRMetadataDataSource *handoffDataSource;
@property (retain, nonatomic) id<MRUMetadataDataSource> metadataDataSource;
@property (readonly, nonatomic) MRUEndpointController *endpointController;
@property (readonly, nonatomic) MRUTVRemoteController *tvRemoteController;
@property (readonly, nonatomic) MRUMetadataController *metadataController;
@property (readonly, nonatomic) MRUMediaSuggestionsController *mediaSuggestionsController;
@property (retain, nonatomic) MRUNowPlayingQueueHandoffCoordinator *queueHandoffCoordinator;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) MRUTransportControlItem *quickControlItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addObserver:(id)a0;
- (id)initWithEndpointController:(id)a0;
- (void)removeObserver:(id)a0;
- (void)metadataController:(id)a0 didChangeNowPlayingInfo:(id)a1;
- (void)endpointController:(id)a0 didChangeRoute:(id)a1;
- (void).cxx_destruct;
- (void)addSwiftObserver:(id)a0;
- (void)endpointController:(id)a0 didChangeState:(long long)a1;
- (void)mediaSuggestionsController:(id)a0 didChangeMediaSuggestions:(id)a1;
- (void)metadataController:(id)a0 didChangeArtwork:(id)a1;
- (void)metadataController:(id)a0 didChangeBundleID:(id)a1;
- (void)metadataController:(id)a0 didChangeTimeControls:(id)a1;
- (void)metadataController:(id)a0 didChangeTransportControls:(id)a1;
- (void)queueHandoffCoordinator:(id)a0 didChangeResponse:(id)a1;
- (void)queueHandoffCoordinator:(id)a0 didChangeState:(long long)a1;
- (void)removeSwiftObserver:(id)a0;
- (void)routingDeviceImage:(id /* block */)a0;
- (void)tvRemoteController:(id)a0 didChangeShowTVRemote:(BOOL)a1;
- (void)updateAutomaticResponseLoading;
- (void)updateQuickTransportItem;

@end
