@class UIImage, NSString;

@interface AMSUIOnboardingFeature : NSObject

@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) NSString *titleText;
@property (readonly, nonatomic) NSString *descriptionText;

- (void).cxx_destruct;
- (id)initWithImage:(id)a0 titleText:(id)a1 descriptionText:(id)a2;

@end
