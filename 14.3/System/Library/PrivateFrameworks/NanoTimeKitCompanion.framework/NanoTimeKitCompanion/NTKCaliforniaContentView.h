@class NTKCaliforniaColorPalette, NSArray, NTKCaliforniaStyleTransitionHandler, CALayer, CLKDevice;

@interface NTKCaliforniaContentView : UIView

@property (retain, nonatomic) CLKDevice *device;
@property (retain, nonatomic) CALayer *hourTicks;
@property (retain, nonatomic) CALayer *minuteTicks;
@property (retain, nonatomic) CALayer *fullscreenTicksMulticolor;
@property (retain, nonatomic) CALayer *circularTicksMulticolor;
@property (retain, nonatomic) CALayer *circularHourTicks;
@property (retain, nonatomic) CALayer *circularMinuteTicks;
@property (retain, nonatomic) NSArray *hourMarkers;
@property (retain, nonatomic) NSArray *temporaryHourMarkers;
@property (nonatomic) unsigned long long temporaryHourMarkersStyle;
@property (nonatomic) unsigned long long temporaryHourMarkersDial;
@property (retain, nonatomic) NTKCaliforniaColorPalette *colorPalette;
@property (retain, nonatomic) NTKCaliforniaStyleTransitionHandler *styleTransitionHandler;
@property (nonatomic) BOOL showingStatusIcon;
@property (nonatomic) BOOL circularPillMarkersCenterPointsCalculated;
@property (nonatomic) BOOL circularTicksHidden;
@property (nonatomic) unsigned long long style;
@property (nonatomic) unsigned long long dial;
@property (nonatomic) unsigned long long color;

+ (id)_disabledLayerActions;

- (void).cxx_destruct;
- (id)_createLayer;
- (void)layoutSubviews;
- (void)applyTransitionFraction:(double)a0 fromStyle:(unsigned long long)a1 toStyle:(unsigned long long)a2;
- (void)applyTransitionFraction:(double)a0 fromDial:(unsigned long long)a1 toDial:(unsigned long long)a2;
- (void)configureTicksForStatus:(BOOL)a0;
- (struct CGPoint { double x0; double x1; } *)hourMarkersCenterPointConstantsForStyle:(unsigned long long)a0 dial:(unsigned long long)a1;
- (struct CGPoint { double x0; double x1; } *)circularPillMarkersCenterPoints;
- (void)addFullscreenTicksIfNeeded:(id)a0;
- (void)addCircularTicksIfNeeded:(id)a0;
- (void)setMinuteTicksColor:(id)a0;
- (void)setHourTicksColor:(id)a0;
- (void)setColorInHourMarkerView:(id)a0 color:(id)a1;
- (void)removeHourMarkers;
- (void)_createDigitsIfNeededWithStyle:(unsigned long long)a0 dial:(unsigned long long)a1;
- (void)removeTemporaryHourMarkers;
- (void)_layoutHourMarkersLayers:(id)a0 style:(unsigned long long)a1 dialShape:(unsigned long long)a2;
- (id)allTicksForStatus:(BOOL)a0;
- (id)layerWithImage:(id)a0;
- (id)hourTicksForStatus:(BOOL)a0;
- (id)_digitLayersForStyle:(unsigned long long)a0 dial:(unsigned long long)a1;
- (id)pillLayerFromHourMarkerView:(id)a0;
- (id)createCaliforniaGraphicAtIndex:(unsigned long long)a0 dial:(unsigned long long)a1;
- (id)createPillAtIndex:(unsigned long long)a0 dial:(unsigned long long)a1;
- (id)createLabelForStyle:(unsigned long long)a0 dial:(unsigned long long)a1;
- (id)textForDigit:(unsigned long long)a0 style:(unsigned long long)a1;
- (id)imageNameForDigit:(unsigned long long)a0 style:(unsigned long long)a1 dial:(unsigned long long)a2;
- (id)createPillViewWithAngle:(double)a0 size:(const struct CGSize { double x0; double x1; } *)a1;
- (id)imageNameComponentForDial:(unsigned long long)a0;
- (id)imageNameComponentForStyle:(unsigned long long)a0;
- (void)_createTemporaryDigitsIfNeededWithStyle:(unsigned long long)a0 dial:(unsigned long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dial:(unsigned long long)a1 style:(unsigned long long)a2 color:(unsigned long long)a3 device:(id)a4;
- (id)_createLayersWithCount:(unsigned long long)a0;
- (void)applyTransitionFraction:(double)a0 fromColorPalette:(id)a1 toColorPalette:(id)a2;

@end
