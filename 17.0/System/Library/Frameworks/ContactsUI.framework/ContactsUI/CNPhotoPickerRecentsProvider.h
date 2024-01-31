@class NSString, CNVisualIdentity;

@interface CNPhotoPickerRecentsProvider : NSObject <CNPhotoPickerProvider>

@property (readonly, nonatomic) CNVisualIdentity *visualIdentity;
@property (nonatomic) BOOL containsContactImage;
@property (nonatomic) BOOL containsMonogram;
@property (retain, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;

- (void).cxx_destruct;
- (id)defaultProviderItemWithContactImage:(id)a0 renderingQueue:(id)a1 callbackQueue:(id)a2;
- (id)initWithVisualIdentity:(id)a0;
- (id)loadItemsForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 RTL:(BOOL)a2 renderingQueue:(id)a3 callbackQueue:(id)a4 itemDelegate:(id)a5;
- (id)providerItemForContactImage:(id)a0 size:(struct CGSize { double x0; double x1; })a1 scale:(double)a2 RTL:(BOOL)a3 renderingQueue:(id)a4 callbackQueue:(id)a5;
- (id)providerItemForContactImage:(id)a0 size:(struct CGSize { double x0; double x1; })a1 scale:(double)a2 RTL:(BOOL)a3 renderingQueue:(id)a4 callbackQueue:(id)a5 fallbackToDefaultItem:(BOOL)a6;

@end
