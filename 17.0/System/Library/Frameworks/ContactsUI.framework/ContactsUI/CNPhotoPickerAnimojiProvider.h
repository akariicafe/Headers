@class NSString;
@protocol AVTAvatarStore;

@interface CNPhotoPickerAnimojiProvider : NSObject <CNPhotoPickerProvider>

@property (readonly, nonatomic) id<AVTAvatarStore> avatarStore;
@property (retain, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)providerItemForAvatarRecord:(id)a0;
+ (id)providerItemForAvatarRecord:(id)a0 imageProvider:(id)a1 renderingQueue:(id)a2 callbackQueue:(id)a3;

- (void).cxx_destruct;
- (BOOL)canCreateMemoji;
- (id)initWithVisualIdentity:(id)a0;
- (id)initWithVisualIdentity:(id)a0 avatarStore:(id)a1;
- (id)loadItemsForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 RTL:(BOOL)a2 renderingQueue:(id)a3 callbackQueue:(id)a4 itemDelegate:(id)a5;

@end
