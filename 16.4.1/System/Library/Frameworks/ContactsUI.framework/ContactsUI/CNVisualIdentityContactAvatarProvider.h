@class CNAvatarImageRenderer;
@protocol CNAvatarImageRenderingScope;

@interface CNVisualIdentityContactAvatarProvider : NSObject

@property (retain, nonatomic) CNAvatarImageRenderer *avatarImageRenderer;
@property (retain, nonatomic) id<CNAvatarImageRenderingScope> renderingScope;

+ (id)descriptorForRequiredKeys;

- (id)initWithSettings:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)avatarImageForContact:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1 includePlaceholder:(BOOL)a2 imageHandler:(id /* block */)a3;
- (id)imageForAvatarAccessoryView:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1;

@end
