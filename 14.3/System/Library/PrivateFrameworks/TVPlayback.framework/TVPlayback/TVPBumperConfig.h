@class UIImage, NSAttributedString, NSObject;
@protocol TVPMediaItem;

@interface TVPBumperConfig : NSObject

@property (retain, nonatomic) NSObject<TVPMediaItem> *mediaItem;
@property (retain, nonatomic) UIImage *logoImage;
@property (retain, nonatomic) NSAttributedString *attributedWarningText;
@property (retain, nonatomic) NSAttributedString *attributedAppleIDText;
@property (nonatomic) double textDwellTime;
@property (nonatomic) double maxTextWidth;

- (id)init;
- (void).cxx_destruct;

@end
