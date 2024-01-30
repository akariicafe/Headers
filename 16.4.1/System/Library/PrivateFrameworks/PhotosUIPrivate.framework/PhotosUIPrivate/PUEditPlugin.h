@class NSString, UIImage, UIApplicationExtensionActivity, NSExtension;

@interface PUEditPlugin : NSObject

@property (readonly, nonatomic) UIApplicationExtensionActivity *applicationExtensionActivity;
@property (nonatomic) unsigned long long category;
@property (readonly, nonatomic) NSExtension *extension;
@property (readonly, nonatomic) UIImage *smallIcon;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) UIImage *icon;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithExtension:(id)a0 pluginCategoryType:(unsigned long long)a1;

@end
