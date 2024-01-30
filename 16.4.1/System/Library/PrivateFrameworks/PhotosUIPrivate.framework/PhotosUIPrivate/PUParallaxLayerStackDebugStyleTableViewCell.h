@class UISegmentedControl, NSString, UISlider, UIView, UIColorWell;
@protocol PUParallaxLayerStackDebugStyleTableViewCellDelegate;

@interface PUParallaxLayerStackDebugStyleTableViewCell : UITableViewCell

@property (weak, nonatomic) id<PUParallaxLayerStackDebugStyleTableViewCellDelegate> styleCellDelegate;
@property (retain, nonatomic) NSString *styleKind;
@property (retain, nonatomic) UIView *controlsView;
@property (retain, nonatomic) UISlider *colorSlider;
@property (retain, nonatomic) UIColorWell *colorButton1;
@property (retain, nonatomic) UIColorWell *colorButton2;
@property (retain, nonatomic) UISegmentedControl *tonalityControl;

- (void).cxx_destruct;
- (void)updateColor:(id)a0;
- (void)updateDelegate:(id)a0;
- (void)applyToStyle:(id)a0;
- (id)colorButtonWithColor:(id)a0 title:(id)a1;
- (id)intensitySliderWithWidth:(double)a0;
- (id)newTonalityControl;
- (void)rebuildControlsViewForStyle:(id)a0;
- (void)updateSlider:(id)a0;

@end
