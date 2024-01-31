@class NSString, CNPhotoPickerVariantsManager, CNVisualIdentity;

@interface CNPhotoPickerEmojiProvider : NSObject <CNPhotoPickerProvider>

@property (readonly, nonatomic) CNVisualIdentity *visualIdentity;
@property (retain, nonatomic) CNPhotoPickerVariantsManager *variantsManager;
@property (retain, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithVisualIdentity:(id)a0;
- (id)loadItemsForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 RTL:(BOOL)a2 renderingQueue:(id)a3 callbackQueue:(id)a4 itemDelegate:(id)a5;

@end
