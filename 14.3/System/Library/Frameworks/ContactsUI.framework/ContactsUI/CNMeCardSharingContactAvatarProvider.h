@class CNContact, NSString, CNAvatarImageRenderer, NSData;

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

@end
