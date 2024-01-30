@class SVKeyValueObserver, SVLooper, SVNonAnimatingDelegate, AVPlayerLayer, SVImageLayer, NSString, AVPlayer;

@interface SVPlayerLayer : CALayer

@property (retain, nonatomic) AVPlayerLayer *playerLayer;
@property (retain, nonatomic) SVLooper *looper;
@property (retain, nonatomic) SVKeyValueObserver *readyForDisplayObserver;
@property (retain, nonatomic) SVKeyValueObserver *statusObserver;
@property (retain, nonatomic) SVNonAnimatingDelegate *nonAnimatingDelegate;
@property (nonatomic) unsigned long long currentPlaybackKind;
@property (readonly) SVImageLayer *stillImageLayer;
@property (retain, nonatomic) AVPlayer *player;
@property (copy, nonatomic) NSString *videoGravity;
@property (nonatomic) BOOL shouldPlayInBackground;

+ (id)defaultActionForKey:(id)a0;

- (void)initialize;
- (void)layoutSublayers;
- (id)initWithLayer:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)pause;
- (id)initWithCoder:(id)a0;
- (void)play;
- (void)dealloc;
- (void)sceneWillEnterForeground;
- (void)sceneDidEnterBackground;
- (void)playWithPlaybackKind:(unsigned long long)a0 looping:(BOOL)a1;
- (void)reduceMotionStatusDidChange;

@end
