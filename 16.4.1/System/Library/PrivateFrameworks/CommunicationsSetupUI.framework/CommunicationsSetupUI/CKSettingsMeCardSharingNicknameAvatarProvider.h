@class NSData, NSString;

@interface CKSettingsMeCardSharingNicknameAvatarProvider : NSObject <CNMeCardSharingAvatarProvider>

@property (readonly, nonatomic) NSData *imageData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithImageData:(id)a0;
- (void).cxx_destruct;
- (void)generateAvatarImageOfSize:(struct CGSize { double x0; double x1; })a0 imageHandler:(id /* block */)a1;

@end
