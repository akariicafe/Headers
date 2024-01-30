@class PUParallaxLayerStackDebugPaletteView, UISegmentedControl;

@interface PUParallaxLayerStackDebugPaletteViewController : UIViewController

@property (retain, nonatomic) UISegmentedControl *switchControl;
@property (retain, nonatomic) PUParallaxLayerStackDebugPaletteView *colorBGPaletteView;
@property (retain, nonatomic) PUParallaxLayerStackDebugPaletteView *colorWashSinglePaletteView;
@property (retain, nonatomic) PUParallaxLayerStackDebugPaletteView *colorWashDuotonePaletteView;
@property (retain, nonatomic) PUParallaxLayerStackDebugPaletteView *customPaletteView;

- (void)viewDidLoad;
- (id)init;
- (void).cxx_destruct;
- (void)addSwitchableView:(id)a0;
- (void)modeChanged:(id)a0;

@end
