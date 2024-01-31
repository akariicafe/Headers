@class NSString, UIImage, UIColor;

@interface AXCCExpandableButtonOption : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *packageName;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) UIColor *selectedBackgroundColor;
@property (nonatomic) BOOL supportsAnimation;

- (id)description;
- (void).cxx_destruct;

@end
