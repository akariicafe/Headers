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

+ (id)defaultActionForKey:(id)a0;

- (void)initialize;
- (void)layoutSublayers;
- (void)play;
- (id)init;
- (void).cxx_destruct;
- (void)playWithPlaybackKind:(unsigned long long)a0 looping:(BOOL)a1;
- (void)dealloc;
- (void)sceneDidEnterBackground;
- (id)initWithCoder:(id)a0;
- (void)pause;
- (void)sceneWillEnterForeground;
- (id)initWithLayer:(id)a0;
- (void)reduceMotionStatusDidChange;

@end
