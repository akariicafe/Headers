@class UIColor, UIBlurEffect;

@interface HULayeredBackgroundEffect : NSObject

@property (retain, nonatomic) UIBlurEffect *blurEffect;
@property (retain, nonatomic) UIColor *fillColor;

+ (id)backgroundWithBlurEffect:(id)a0;
+ (id)backgroundWithFillColor:(id)a0;

- (void).cxx_destruct;

@end
