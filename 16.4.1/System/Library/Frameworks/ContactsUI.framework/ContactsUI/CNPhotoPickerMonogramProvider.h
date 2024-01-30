@class NSString, CNVisualIdentity;

@interface CNPhotoPickerMonogramProvider : NSObject <CNPhotoPickerProvider>

@property (readonly, nonatomic) CNVisualIdentity *visualIdentity;
@property (retain, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)generateMonogramItemForVisualIdentity:(id)a0 size:(struct CGSize { double x0; double x1; })a1 scale:(double)a2 RTL:(BOOL)a3 isVariantOptionItem:(BOOL)a4 backgroundColor:(id)a5;
+ (id)monogramProviderItemForVisualIdentity:(id)a0 size:(struct CGSize { double x0; double x1; })a1 scale:(double)a2 RTL:(BOOL)a3 isVariantOptionItem:(BOOL)a4 backgroundColor:(id)a5;
+ (id)providerItemForVisualIdentity:(id)a0 size:(struct CGSize { double x0; double x1; })a1 RTL:(BOOL)a2;
+ (id)providerItemForVisualIdentity:(id)a0 size:(struct CGSize { double x0; double x1; })a1 scale:(double)a2 RTL:(BOOL)a3 backgroundColor:(id)a4;

- (void).cxx_destruct;
- (id)initWithVisualIdentity:(id)a0;
- (id)loadItemsForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 RTL:(BOOL)a2 renderingQueue:(id)a3 callbackQueue:(id)a4 itemDelegate:(id)a5;

@end
