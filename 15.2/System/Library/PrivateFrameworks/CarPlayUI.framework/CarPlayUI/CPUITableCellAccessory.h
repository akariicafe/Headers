@class UIImage;

@interface CPUITableCellAccessory : NSObject

@property (retain, nonatomic) UIImage *image;

+ (id)accessoryWithImage:(id)a0;
+ (id)accessoryWithCloudIcon;
+ (id)accessoryWithiCloudIcon;
+ (id)accessoryWithDisclosureIndicator;
+ (id)accessoryWithActivityIndicator;

- (void).cxx_destruct;

@end
