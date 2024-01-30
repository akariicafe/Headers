@class PXGLayout, PXCuratedLibraryViewModel;

@interface PXCuratedLibraryActionViewController : UIViewController

@property (readonly, nonatomic) PXCuratedLibraryViewModel *viewModel;
@property (readonly, nonatomic) PXGLayout *layout;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithViewModel:(id)a0 layout:(id)a1;

@end
