@class NSString, UIImage;

@interface HKSplashScreenItem : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *fullDescription;
@property (retain, nonatomic) UIImage *icon;

+ (id)splashScreenItemWithTitle:(id)a0 icon:(id)a1 fullDescription:(id)a2;
+ (id)splashScreenItemWithDictionary:(id)a0;

- (void).cxx_destruct;

@end
