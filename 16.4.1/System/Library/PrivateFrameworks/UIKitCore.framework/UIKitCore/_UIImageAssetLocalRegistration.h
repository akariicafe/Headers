@class UIImage, UIImageConfiguration;

@interface _UIImageAssetLocalRegistration : NSObject

@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImageConfiguration *configuration;

+ (id)registrationWithImage:(id)a0 configuration:(id)a1;

- (BOOL)matchesConfiguration:(id)a0;
- (void).cxx_destruct;

@end
