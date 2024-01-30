@class NSString, CNVisualIdentity;

@interface CNPhotoPickerAccountPhotoProvider : NSObject <CNPhotoPickerProvider>

@property (readonly, nonatomic) CNVisualIdentity *visualIdentity;
@property (nonatomic) BOOL includeUnifiedContactImages;
@property (retain, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithVisualIdentity:(id)a0;
- (id)initWithVisualIdentity:(id)a0 includeUnifiedContactImages:(BOOL)a1;
- (id)loadItemsForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 RTL:(BOOL)a2 renderingQueue:(id)a3 callbackQueue:(id)a4 itemDelegate:(id)a5;
- (id)providerItemForVisualIdentity:(id)a0 forSize:(struct CGSize { double x0; double x1; })a1 scale:(double)a2 RTL:(BOOL)a3 renderingQueue:(id)a4 callbackQueue:(id)a5 itemDelegate:(id)a6;

@end
