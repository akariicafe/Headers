@class NSString, AVPlayerItem;

@interface AVTSplashScreenConfiguration : NSObject

@property (retain, nonatomic) AVPlayerItem *primaryPlayerItem;
@property (retain, nonatomic) AVPlayerItem *secondaryPlayerItem;
@property (retain, nonatomic) NSString *titleString;
@property (retain, nonatomic) NSString *subTitleString;
@property (retain, nonatomic) NSString *buttonString;

- (void).cxx_destruct;

@end
