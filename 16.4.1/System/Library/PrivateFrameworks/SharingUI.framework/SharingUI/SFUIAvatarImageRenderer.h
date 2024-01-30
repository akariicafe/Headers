@class CNAvatarImageRenderer;

@interface SFUIAvatarImageRenderer : NSObject

@property (retain, nonatomic) CNAvatarImageRenderer *imageRenderer;

+ (id)avatarImageRender;

- (id)init;
- (void).cxx_destruct;
- (id)avatarImageForContacts:(id)a0 scope:(id)a1;
- (id)placeholderImageForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;

@end
