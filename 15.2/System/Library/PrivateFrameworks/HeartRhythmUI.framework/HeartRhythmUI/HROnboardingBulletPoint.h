@class UIImage, NSString;

@interface HROnboardingBulletPoint : NSObject

@property (readonly, nonatomic) UIImage *bulletImage;
@property (readonly, nonatomic) NSString *bulletTitleString;
@property (readonly, nonatomic) NSString *bulletBodyString;

+ (id)bulletPointWithImage:(id)a0 title:(id)a1 body:(id)a2;

- (void).cxx_destruct;
- (id)initWithImage:(id)a0 title:(id)a1 body:(id)a2;

@end
