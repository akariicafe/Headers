@class UIColor, NSString, NSArray, NTKExplorerDotColorOptions, NTKExplorerDotLayoutConstraints;
@protocol CLKMonochromeFilterProvider;

@interface NTKExplorerStatusView : UIView <CLKMonochromeComplicationView> {
    NSArray *_dotLayers;
    BOOL _observing;
    long long _targetDotPosition;
}

@property (readonly) double dotDiameter;
@property (readonly) double dotBorderWidth;
@property (readonly) double dotSpacing;
@property (readonly) double noServiceDotHeight;
@property (readonly, nonatomic) UIColor *connectedDotColor;
@property (readonly, nonatomic) UIColor *connectedDotBackgroundColor;
@property (readonly, nonatomic) UIColor *noServiceDotColor;
@property (retain, nonatomic) NTKExplorerDotLayoutConstraints *dotLayoutConstraints;
@property (retain, nonatomic) NTKExplorerDotColorOptions *dotColorOptions;
@property (readonly, nonatomic) long long position;
@property (nonatomic) long long signalStrengthBars;
@property (nonatomic) BOOL showsFullSignalStrength;
@property (nonatomic) BOOL tritiumIsOn;
@property (weak, nonatomic) id<CLKMonochromeFilterProvider> filterProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)noServiceDotColor;
+ (id)connectedDotColor;
+ (double)dotDiameter;
+ (double)dotSpacing;
+ (double)dotBorderWidth;
+ (double)noServiceDotHeight;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dotLayoutConstraints:(id)a1 dotColorOptions:(id)a2;
- (void)_layoutDotLayers;
- (void)_updateDotFillStates;
- (id)connectivityDotBackingColor;
- (void)setDotPosition:(long long)a0 animated:(BOOL)a1 completion:(id /* block */)a2;

@end
