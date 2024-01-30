@class AVPlayer, NSString, NSMutableDictionary, NSURL, AVURLAsset, AVPlayerItem, SUPlayerStatus;

@interface SUAudioPlayer : NSObject <AVAssetResourceLoaderDelegate> {
    AVURLAsset *_asset;
    BOOL _didPostForPreviewHistory;
    NSMutableDictionary *_nowPlayingInfo;
    AVPlayer *_player;
    AVPlayerItem *_playerItem;
    SUPlayerStatus *_status;
    id _timeObserver;
}

@property (readonly, nonatomic) NSURL *URL;
@property (retain, nonatomic) NSURL *certificateURL;
@property (retain, nonatomic) NSURL *keyURL;
@property (readonly, nonatomic) SUPlayerStatus *playerStatus;
@property (nonatomic) long long storeItemIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithURL:(id)a0;
- (void)_failWithError:(id)a0;
- (BOOL)resourceLoader:(id)a0 shouldWaitForLoadingOfRequestedResource:(id)a1;
- (void)pause;
- (void)seekToTime:(double)a0;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)stop;
- (void)play;
- (void)_updateForPeriodicTickWithTime:(double)a0;
- (void)_applyNowPlayingInfo;
- (void)_destroyPlayer;
- (void)_destroyPlayerItem;
- (void)_handleAssetValuesDidLoad;
- (void)_itemFailedToPlayToEndNotification:(id)a0;
- (void)_itemPlayedToEndNotification:(id)a0;
- (id)_newFadeInAudioMixForAsset:(id)a0;
- (void)_postStatusChangeNotification;
- (void)_setPlayerState:(long long)a0;
- (void)setValue:(id)a0 forNowPlayingKey:(id)a1;
- (id)valueForNowPlayingKey:(id)a0;

@end
