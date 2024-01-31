@class NSString, CNVisualIdentity;

@interface CNPhotoPickerPhotoFacesProvider : NSObject <CNPhotoPickerProvider>

@property (readonly, nonatomic) CNVisualIdentity *visualIdentity;
@property (retain, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cropRectForAsset:(id)a0 face:(id)a1;
- (id)getItemsFromPhotoLibraryWithItemDelegate:(id)a0;
- (id)initWithVisualIdentity:(id)a0;
- (id)loadItemsForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 RTL:(BOOL)a2 renderingQueue:(id)a3 callbackQueue:(id)a4 itemDelegate:(id)a5;

@end
