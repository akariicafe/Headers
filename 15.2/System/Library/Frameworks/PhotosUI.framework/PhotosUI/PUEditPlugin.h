@class NSString, UIImage, UIApplicationExtensionActivity, NSExtension;

@interface PUEditPlugin : NSObject

@property (readonly, nonatomic) UIApplicationExtensionActivity *_applicationExtensionActivity;
@property (nonatomic) unsigned long long category;
@property (readonly, nonatomic) NSExtension *extension;
@property (readonly, nonatomic) UIImage *smallIcon;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) UIImage *icon;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithExtension:(id)a0 pluginCategoryType:(unsigned long long)a1;

@end
