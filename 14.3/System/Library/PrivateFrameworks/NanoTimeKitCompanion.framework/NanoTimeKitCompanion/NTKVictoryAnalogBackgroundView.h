@class UIView, NSArray, UIImage, CLKDevice, NSMutableDictionary, NSDictionary, NSMutableArray, NTKVictoryLogoButton, CAMediaTimingFunction;
@protocol NTKVictoryAnalogBackgroundColorPalette, NTKVictoryAnalogBackgroundViewDelegate;

@interface NTKVictoryAnalogBackgroundView : UIView {
    CLKDevice *_device;
    UIImage *_dotImage;
    UIView *_contentView;
    NSMutableArray *_ringLayers;
    BOOL _ringLayerIsDigit[12];
    NSArray *_largeHourMarkerLabels;
    NSArray *_mediumNumberLayers;
    NSMutableDictionary *_smallHourMarkerLabelsByIndex;
    NSArray *_temporaryNumberLayers;
    NSArray *_activeDigitIndices;
    BOOL _canonicalDigitStatesByStyle[3][12];
    NSDictionary *_transitionDigitTargetStates;
    NSArray *_transitionDigitIndices;
    NSArray *_transitionStaticDigitIndices;
    unsigned long long _transitionFromStyle;
    unsigned long long _transitionToStyle;
    CAMediaTimingFunction *_transitionTimingFunction;
    NTKVictoryLogoButton *_logoButton;
    NTKVictoryLogoButton *_smallLogoButton;
    struct CGPoint { double x; double y; } _logoPositionRing;
    struct CGPoint { double x; double y; } _logoPositionNoDigits;
    struct CGPoint { double x; double y; } _logoPositionBig;
    struct CGPoint { double x; double y; } _logoPositionSmallFont;
    struct CGPoint { double x; double y; } _logoPositionCircularDial;
    double _dialShapeFraction;
}

@property (retain, nonatomic) id<NTKVictoryAnalogBackgroundColorPalette> palette;
@property (nonatomic) unsigned long long style;
@property (nonatomic) unsigned long long dialShape;
@property (retain, nonatomic) UIImage *logoImage;
@property (weak, nonatomic) id<NTKVictoryAnalogBackgroundViewDelegate> delegate;

+ (id)_disabledLayerActions;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)_dotImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forDevice:(id)a1;
- (void)setInTimeTravel:(BOOL)a0 animated:(BOOL)a1;
- (void)applyTransitionFraction:(double)a0 fromStyle:(unsigned long long)a1 toStyle:(unsigned long long)a2 fromPalette:(id)a3 toPalette:(id)a4;
- (void)applyTransitionFraction:(double)a0 fromPalette:(id)a1 toPalette:(id)a2 style:(unsigned long long)a3;
- (void)willBeginEditing;
- (void)_logoTapped:(id)a0;
- (struct CGPoint { double x0; double x1; })logoPositionForStyle:(unsigned long long)a0;
- (id)_circularDialLogoImage;
- (struct CGPoint { double x0; double x1; })centerPointForSmallHourMarkerAtIndex:(unsigned long long)a0;
- (void)layoutNumbers;
- (struct CGPoint { double x0; double x1; })_ringDigitOffsetAtIndex:(unsigned long long)a0;
- (void)addLogoButtonIfNeeded;
- (void)_createRingLayersIfNeeded;
- (void)_createLargeHourMarkerLabelsAndAttachToViewIfNeeded;
- (void)_clearTransitionStateForStyle:(unsigned long long)a0;
- (BOOL)isCircularDial;
- (void)addSmallLogoButtonIfNeeded;
- (void)_createMediumNumberLayersIfNeededAndAttachToViewIfNeeded;
- (double)_transitionProgressForDigitAtIndex:(unsigned long long)a0 overallProgress:(double)a1 delayPerDigit:(double)a2 digitTransitionLength:(double)a3;
- (id)_activeRingLayers;
- (void)_setRingLayerAtIndex:(unsigned long long)a0 isDigit:(BOOL)a1;
- (double)_elementScaleForTransitionProgress:(double)a0 initialScale:(double)a1 middleScale:(double)a2 finalScale:(double)a3;
- (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })_intermediateTransformForBigNumberAtIndex:(unsigned long long)a0 fraction:(double)a1;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_affineTransformFromTransform3D:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })a0;
- (id)_bigNumberInitialTransforms;
- (void)_applyPalette:(id)a0 forStyle:(unsigned long long)a1;
- (void)applyTransitionFraction:(double)a0 fromPalette:(id)a1 toPalette:(id)a2 style:(unsigned long long)a3 animateElements:(BOOL)a4;
- (id)_activeRingObjects;
- (struct CGColor { } *)_layerTransitionColorFromColor:(id)a0 toColor:(id)a1 amount:(double)a2;
- (id)_createAndAddLayersWithCount:(unsigned long long)a0;
- (id)_createSmallHourMarkerLabelForIndex:(id)a0;
- (id)_createHourMarkerLabelsWithFontSize:(double)a0;
- (unsigned long long)_digitForIndex:(unsigned long long)a0;
- (void)applyTransitionFraction:(double)a0 fromDialShape:(unsigned long long)a1 toDialShape:(unsigned long long)a2;
- (void)applyTransitionFraction:(double)a0 fromOlympusStyle:(unsigned long long)a1 toOlympusStyle:(unsigned long long)a2;

@end
