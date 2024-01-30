@class NSString, ISAnimatedImageView;

@interface PUAnimatedImageTileViewController : PUImageTileViewController <PUAssetViewModelChangeObserver> {
    ISAnimatedImageView *_animatedImageView;
    long long _interactionState;
    struct { BOOL playbackState; BOOL animatedImage; } _isValid;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewModel:(id)a0 didChange:(id)a1;
- (void)assetViewModelDidChange;
- (void)_invalidateAnimatedImage;
- (void)_updatePlaybackStateIfNeeded;
- (id)loadView;
- (void).cxx_destruct;
- (void)_invalidatePlaybackState;
- (void)_updateAnimatedImageIfNeeded;

@end
