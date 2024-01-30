@class MRUNowPlayingController, MPAVEndpointRoute, NSString, UIImage, MPArtworkCatalog, MRUAudioAnalyzer, MRUWaveformData, MRNowPlayingController;
@protocol MRUWaveformControllerDelegate;

@interface MRUWaveformController : NSObject <MRNowPlayingControllerDelegate, MRUAudioAnalyzerObserver, MRUNowPlayingControllerObserver, MRUArtworkViewObserver>

@property (retain, nonatomic) MRUAudioAnalyzer *audioAnalyzer;
@property (retain, nonatomic) MRNowPlayingController *mrNowPlayingController;
@property (retain, nonatomic) MPAVEndpointRoute *endpointRoute;
@property (nonatomic) BOOL isAnalyzingAudio;
@property (nonatomic) struct CGSize { double width; double height; } artworkFittingSize;
@property (retain, nonatomic) NSString *trackIdentifier;
@property (nonatomic) int nowPlayingPID;
@property (readonly, nonatomic) MRUWaveformData *waveform;
@property (readonly, nonatomic) MPArtworkCatalog *artworkCatalog;
@property (readonly, nonatomic) UIImage *artworkImage;
@property (readonly, nonatomic, getter=isPlaying) BOOL playing;
@property (readonly, nonatomic, getter=isRemoteRoute) BOOL remoteRoute;
@property (readonly, nonatomic) NSString *remoteRouteSymbolName;
@property (nonatomic, getter=isVisible) BOOL visible;
@property (nonatomic) BOOL requestArtworkImage;
@property (retain, nonatomic) MRUNowPlayingController *nowPlayingController;
@property (weak, nonatomic) id<MRUWaveformControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setPlaying:(BOOL)a0;
- (void)artworkView:(id)a0 didChangeArtworkImage:(id)a1;
- (void)controller:(id)a0 playerPathDidChange:(id)a1;
- (BOOL)nowPlayingControllerShouldAutomaticallyUpdateResponse:(id)a0;
- (void)nowPlayingController:(id)a0 metadataController:(id)a1 didChangeNowPlayingInfo:(id)a2;
- (void)dealloc;
- (void)nowPlayingController:(id)a0 endpointController:(id)a1 didChangeRoute:(id)a2;
- (void)setArtworkImage:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)setWaveform:(id)a0;
- (void)setRemoteRoute:(BOOL)a0;
- (void)audioAnalyzer:(id)a0 didUpdateWaveform:(id)a1;
- (void)routeDidUpdateNotification:(id)a0;
- (void)setRemoteRouteSymbolName:(id)a0;
- (void)updateAnalyzer;
- (void)updateImage:(id)a0;
- (void)updateRoute:(id)a0;

@end
