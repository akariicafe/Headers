@class PXPhotosViewModel, _PXPhotosBarButtonSpecManager;

@interface PXPhotosBarButtonItemsController : NSObject

@property (readonly, nonatomic) _PXPhotosBarButtonSpecManager *specManager;
@property (readonly, nonatomic) PXPhotosViewModel *viewModel;

- (id)init;
- (void).cxx_destruct;
- (id)_createBarButtonItemWithTitle:(id)a0 orSystemItem:(long long)a1 orSystemIconName:(id)a2 target:(id)a3 action:(SEL)a4;
- (id)createBarButtonItemWithTitle:(id)a0 target:(id)a1 action:(SEL)a2;
- (id)createBarButtonItemWithSystemItem:(long long)a0 target:(id)a1 action:(SEL)a2;
- (id)createBarButtonItemWithSystemIconName:(id)a0 target:(id)a1 action:(SEL)a2;
- (id)initWithExtendedTraitCollection:(id)a0 viewModel:(id)a1;

@end
