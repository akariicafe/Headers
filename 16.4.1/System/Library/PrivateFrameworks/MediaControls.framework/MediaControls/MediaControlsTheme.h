@class UIImage;

@interface MediaControlsTheme : NSObject

@property (class, readonly, nonatomic) UIImage *playImage;
@property (class, readonly, nonatomic) UIImage *pauseImage;
@property (class, readonly, nonatomic) UIImage *stopImage;
@property (class, readonly, nonatomic) UIImage *forwardImage;
@property (class, readonly, nonatomic) UIImage *backwardImage;
@property (class, readonly, nonatomic) UIImage *captionsImage;
@property (class, readonly, nonatomic) UIImage *starImage;
@property (class, readonly, nonatomic) UIImage *starFillImage;
@property (class, readonly, nonatomic) UIImage *hamburgerImage;
@property (class, readonly, nonatomic) UIImage *volumeMinImage;
@property (class, readonly, nonatomic) UIImage *volumeMaxImage;
@property (class, readonly, nonatomic) UIImage *airplayVideoImage;
@property (class, readonly, nonatomic) UIImage *appleTVRemote;

+ (id)goBackwardImageForTimeInterval:(double)a0;
+ (id)goForwardImageForTimeInterval:(double)a0;

@end
