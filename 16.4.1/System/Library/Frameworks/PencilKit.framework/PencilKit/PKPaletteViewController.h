@class PKPaletteHostView, PKDrawingPaletteView;
@protocol PKPaletteViewControllerDelegate;

@interface PKPaletteViewController : UIViewController {
    PKPaletteHostView *_hostView;
}

@property (weak, nonatomic) id<PKPaletteViewControllerDelegate> delegate;
@property (readonly, nonatomic) PKDrawingPaletteView *paletteView;

- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;

@end
