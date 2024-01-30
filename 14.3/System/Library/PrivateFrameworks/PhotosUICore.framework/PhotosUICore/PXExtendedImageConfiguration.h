@class NSString, UIColor, UIImageConfiguration;

@interface PXExtendedImageConfiguration : NSObject

@property (readonly, nonatomic) NSString *imageName;
@property (readonly, nonatomic) BOOL isSystemImage;
@property (readonly, nonatomic) UIColor *tintColor;
@property (readonly, nonatomic) UIImageConfiguration *imageConfiguration;

- (id)init;
- (void).cxx_destruct;
- (id)initWithImageName:(id)a0;
- (id)initWithImageName:(id)a0 isSystemImage:(BOOL)a1;
- (id)initWithImageName:(id)a0 isSystemImage:(BOOL)a1 tintColor:(id)a2 imageConfiguration:(id)a3;

@end
