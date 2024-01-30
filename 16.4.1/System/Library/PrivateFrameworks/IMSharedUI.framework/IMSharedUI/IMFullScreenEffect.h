@class UIColor, NSString, NSArray, NSURL;

@interface IMFullScreenEffect : NSObject

@property (nonatomic) BOOL triggeredByResponseKit;
@property (weak, nonatomic) id triggeredByObject;
@property (copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) Class effectViewClass;
@property (readonly, nonatomic) unsigned long long layerCount;
@property (readonly, nonatomic) BOOL effectIsDark;
@property (readonly, nonatomic, getter=isForegroundEffect) BOOL foregroundEffect;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) NSArray *messageFilters;
@property (readonly, nonatomic) NSURL *soundEffectFileURL;
@property (readonly, nonatomic) BOOL shouldDrawOverNavigationBar;
@property (readonly, nonatomic) BOOL soundEffectHasHapticTrack;
@property (nonatomic) unsigned long long messageOrientation;
@property (weak) id delegate;

+ (id)_monochromeDimmingFilterWithType:(long long)a0;
+ (id)bigEmojiFilter;
+ (id)stickerFilter;
+ (id)tapBackFilter;

- (void).cxx_destruct;
- (void)prepareSoundEffect;

@end
