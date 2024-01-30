@class AVPlayerViewController, NSString;
@protocol CKReusableVideoPlayerDelegate;

@interface CKReusableVideoPlayer : NSObject <AVPlayerViewControllerDelegate>

@property (retain, nonatomic) AVPlayerViewController *playerViewController;
@property (nonatomic, getter=isObservingPlayer) BOOL observingPlayer;
@property (nonatomic, getter=isPlaying) BOOL playing;
@property (nonatomic) BOOL wasPlayingBeforeDisappearing;
@property (copy, nonatomic) NSString *videoTransferGUID;
@property (weak, nonatomic) id<CKReusableVideoPlayerDelegate> delegate;
@property (readonly, nonatomic, getter=isPictureInPictureActive) BOOL pictureInPictureActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)pause;
- (void)removeRateObserverIfNecessary;
- (void)selectedConversationChanged;
- (void)configureWithPlayerItem:(id)a0;
- (void)windowDidClose;
- (BOOL)isReadyForReuse;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)willDisappear;

@end
