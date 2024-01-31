@class NSString, CNVisualIdentity;

@interface CNPhotoPickerAddItemsProvider : NSObject <CNPhotoPickerProvider>

@property (readonly, nonatomic) CNVisualIdentity *visualIdentity;
@property (nonatomic) BOOL allowsTakePhotoItem;
@property (nonatomic) BOOL allowsPhotoFromLibraryItem;
@property (nonatomic) BOOL allowsMonograms;
@property (nonatomic) BOOL allowsEmoji;
@property (retain, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)addItemOfType:(unsigned long long)a0;
- (id)initWithVisualIdentity:(id)a0;
- (id)initWithVisualIdentity:(id)a0 allowsTakePhotoItem:(BOOL)a1 allowsPhotoFromLibraryItem:(BOOL)a2 allowsMonograms:(BOOL)a3 allowsEmoji:(BOOL)a4;
- (id)loadItemsForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 RTL:(BOOL)a2 renderingQueue:(id)a3 callbackQueue:(id)a4 itemDelegate:(id)a5;
- (id)symbolImageNameForAddItemType:(unsigned long long)a0;

@end
