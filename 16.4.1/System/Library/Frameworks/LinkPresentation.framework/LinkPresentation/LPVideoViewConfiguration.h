@interface LPVideoViewConfiguration : NSObject <NSCopying>

@property (nonatomic) BOOL disablePlayback;
@property (nonatomic) BOOL disablePlaybackControls;
@property (nonatomic) BOOL disableAutoPlay;
@property (nonatomic) BOOL allowsLoadingMediaWithAutoPlayDisabled;
@property (nonatomic) double fullScreenTransitionCornerRadius;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
