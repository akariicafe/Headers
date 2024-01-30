@class UIImage, WBSWebExtensionData;

@interface SFWebExtensionButton : NSObject

@property (readonly, nonatomic) WBSWebExtensionData *extension;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) BOOL badged;
@property (readonly, nonatomic) long long extensionCount;

- (void).cxx_destruct;
- (id)initWithExtension:(id)a0 image:(id)a1 badged:(BOOL)a2;
- (id)initWithExtensionCount:(long long)a0;

@end
