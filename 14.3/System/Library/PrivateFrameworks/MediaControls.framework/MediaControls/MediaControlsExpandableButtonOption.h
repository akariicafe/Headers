@class NSString, UIColor;

@interface MediaControlsExpandableButtonOption : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *packageName;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) UIColor *selectedBackgroundColor;
@property (nonatomic) BOOL supportsAnimation;

- (void).cxx_destruct;

@end
