@class CNContact, NSString, CNAvatarImageRenderer, NSData, CNWallpaper;

@interface CNMeCardSharingContactAvatarProvider : NSObject <CNMeCardSharingAvatarProvider, CNMeCardSharingAvatarImageDataProvider>

@property (readonly, nonatomic) CNAvatarImageRenderer *renderer;
@property (readonly, nonatomic) CNContact *contact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSData *imageData;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } cropRect;
@property (readonly, nonatomic) NSData *thumbnailImageData;
@property (readonly, nonatomic) CNWallpaper *wallpaper;

- (id)initWithContact:(id)a0;
- (void).cxx_destruct;
- (void)generateAvatarImageOfSize:(struct CGSize { double x0; double x1; })a0 imageHandler:(id /* block */)a1;
- (void)generatePosterAnimationControllerWithWindowScene:(id)a0 imageHandler:(id /* block */)a1;
- (void)generatePosterImageWithWindowScene:(id)a0 imageHandler:(id /* block */)a1;
- (id)initWithContact:(id)a0 renderer:(id)a1;

@end
