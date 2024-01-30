@class UIImage, SSUIServiceOptions;

@interface SSUIShowScreenshotUIWithImageServiceRequest : SSUIServiceRequest

@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) SSUIServiceOptions *options;

+ (id)entitlement;

- (id)initWithXPCDictionary:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithXPCDictionary:(id)a0;

@end
