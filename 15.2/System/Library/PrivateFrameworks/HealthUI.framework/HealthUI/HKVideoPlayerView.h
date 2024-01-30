@class AVPlayerLooper, UIImageView, UIImage, AVQueuePlayer, NSArray;
@protocol NSObject;

@interface HKVideoPlayerView : UIView

@property (retain, nonatomic) UIImage *thumbnail;
@property (retain, nonatomic) UIImageView *thumbnailImageView;
@property (retain, nonatomic) AVQueuePlayer *queuePlayer;
@property (retain, nonatomic) AVPlayerLooper *playerLooper;
@property (retain, nonatomic) NSArray *items;
@property (nonatomic) BOOL looping;
@property (nonatomic) BOOL shouldBePlaying;
@property (retain, nonatomic) id<NSObject> applicationActiveNotificationStub;
@property (retain, nonatomic) id<NSObject> applicationInactiveNotificationStub;
@property (nonatomic) BOOL preventsDisplaySleepDuringVideoPlayback;

+ (Class)layerClass;
+ (id)playerViewWithURL:(id)a0 looping:(BOOL)a1;

- (void)setPlayer:(id)a0;
- (void).cxx_destruct;
- (void)pause;
- (void)play;
- (void)dealloc;
- (void)_setUpUI;
- (id)player;
- (void)_setUpNotifications;
- (id)initWithItems:(id)a0 thumbnail:(id)a1 looping:(BOOL)a2;

@end
