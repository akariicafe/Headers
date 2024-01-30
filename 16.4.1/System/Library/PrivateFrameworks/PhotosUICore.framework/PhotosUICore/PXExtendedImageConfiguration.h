@class UIColor, NSString, NSBundle, UIImageConfiguration;

@interface PXExtendedImageConfiguration : NSObject

@property (readonly, nonatomic) NSString *imageName;
@property (readonly, nonatomic) BOOL isSystemImage;
@property (readonly, nonatomic) UIColor *tintColor;
@property (readonly, nonatomic) UIImageConfiguration *imageConfiguration;
@property (readonly, nonatomic) NSBundle *bundle;

- (id)initWithImageName:(id)a0 isSystemImage:(BOOL)a1;
- (id)initWithImageName:(id)a0;
- (id)init;
- (id)initWithImageName:(id)a0 isSystemImage:(BOOL)a1 tintColor:(id)a2 imageConfiguration:(id)a3 inBundle:(id)a4;
- (void).cxx_destruct;

@end
