@class MRUNowPlayingInfo, NSString, MRUArtwork, MRUTimeControls, MPCPlayerResponse, MRUEndpointController, MRUTransportControls;
@protocol MRUMetadataDataSourceDelegate;

@interface MRUMPCMetadataDataSource : NSObject <MRUEndpointControllerObserver, MPArtworkCacheReference, _MCStateDumpPropertyListTransformable, MRUMetadataDataSource>

@property (nonatomic) unsigned long long stateHandle;
@property (readonly, nonatomic) MRUEndpointController *endpointController;
@property (retain, nonatomic) MPCPlayerResponse *response;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) MRUArtwork *artwork;
@property (readonly, nonatomic) MRUNowPlayingInfo *nowPlayingInfo;
@property (readonly, nonatomic) MRUTimeControls *timeControls;
@property (readonly, nonatomic) MRUTransportControls *transportControls;
@property (weak, nonatomic) id<MRUMetadataDataSourceDelegate> delegate;

- (id)initWithResponse:(id)a0;
- (void)updateArtwork;
- (id)placeholder;
- (void)dealloc;
- (id)initWithEndpointController:(id)a0;
- (void)endpointController:(id)a0 didChangeRoute:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (id)_stateDumpObject;
- (void)updateData;
- (void)updateTimeControlsWithResponse:(id)a0;
- (void)endpointController:(id)a0 didChangeResponse:(id)a1;
- (void)endpointController:(id)a0 didChangeState:(long long)a1;
- (id)placeholderSymbolName;
- (void)updateArtworkWithResponse:(id)a0;
- (void)updateBundleIDWithResponse:(id)a0;
- (void)updateNowPlayingInfoWithResponse:(id)a0;
- (void)updateTransportControlsWithResponse:(id)a0;

@end
