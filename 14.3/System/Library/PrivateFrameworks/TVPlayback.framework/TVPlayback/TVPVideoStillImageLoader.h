@class TVPMediaItemLoader, NSMutableArray, NSString, AVAssetImageGenerator, TVPStateMachine, NSObject;
@protocol TVPMediaItem;

@interface TVPVideoStillImageLoader : NSObject <TVPPlaybackImageLoader>

@property (retain, nonatomic) NSObject<TVPMediaItem> *mediaItem;
@property (retain, nonatomic) TVPMediaItemLoader *mediaItemLoader;
@property (retain, nonatomic) TVPStateMachine *stateMachine;
@property (retain, nonatomic) NSMutableArray *pendingImageLoadInfos;
@property (retain, nonatomic) NSMutableArray *imageLoadInfosBeingLoaded;
@property (retain, nonatomic) AVAssetImageGenerator *imageGenerator;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } videoDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void).cxx_destruct;
- (id)initWithMediaItem:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)invalidate;
- (void)_registerStateMachineHandlers;
- (id)loadImagesForTimes:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1 withHandler:(id /* block */)a2;
- (void)cancelImageLoadingForIdentifiers:(id)a0;
- (void)_mediaItemLoader:(id)a0 stateDidChangeTo:(id)a1;
- (double)closestImageTimeForTime:(double)a0;

@end
