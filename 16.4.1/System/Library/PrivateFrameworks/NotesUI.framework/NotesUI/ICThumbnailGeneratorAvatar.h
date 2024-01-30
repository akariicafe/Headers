@class CNAvatarImageRenderer;

@interface ICThumbnailGeneratorAvatar : ICThumbnailGenerator

@property (readonly, nonatomic) CNAvatarImageRenderer *renderer;
@property (readonly, nonatomic, getter=isRTL) BOOL RTL;

- (id)initWithManagedObjectContext:(id)a0;
- (void).cxx_destruct;
- (void)drawWithBorderIntoContext:(struct CGContext { } *)a0 avatarImage:(id)a1;
- (void)generateThumbnailWithConfiguration:(id)a0 completion:(id /* block */)a1;

@end
