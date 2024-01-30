@class NSString, CALayer, CAContext, CATextLayer;

@interface PUIProgressWindow : NSObject <CALayerDelegate> {
    BOOL _weCreatedTheContext;
    CAContext *_context;
    int _deviceClass;
    int _screenClass;
    int _productType;
    BOOL _isSecurityResearchDevice;
    struct CGSize { double width; double height; } _displaySize;
    struct CGSize { double width; double height; } _framebufferSize;
    struct CGSize { double width; double height; } _layerPositioningSize;
    float _displayScale;
    float _displayOrientation;
    BOOL _sideways;
    BOOL _renderWithIOSurface;
    id _framebufferListenerToken;
    float _currentProgress;
    struct CGImage { } *_appleLogo;
    double _progressXDelta;
    double _progressYDelta;
    double _progressWidth;
    double _progressHeight;
    BOOL _forceInverted;
    BOOL _white;
    BOOL _showsProgressBar;
    CALayer *_progressLayer;
    CATextLayer *_statusTextLayer;
    struct __IOSurface { } *_ioSurface;
    CALayer *_ioSurfaceLayer;
}

@property (readonly, nonatomic) CALayer *layer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_usesPreBoardAppearance;
+ (void)setUsesPreBoardAppearance;

- (void)setVisible:(BOOL)a0;
- (void)setStatusText:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)drawLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (id)initWithProgressBarVisibility:(BOOL)a0 createContext:(BOOL)a1 contextLevel:(float)a2 appearance:(long long)a3;
- (void)setProgressValue:(float)a0;
- (void)_createContext;
- (id)initWithProgressBarVisibility:(BOOL)a0 level:(float)a1 forceInverted:(BOOL)a2;
- (id)initWithOptions:(unsigned long long)a0 contextLevel:(float)a1 appearance:(long long)a2;
- (void)_collectDisplayInfo;
- (void)_createLayer;
- (void)_updateLayerForFramebufferSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGColor { } *)_copyCGColorRefWithComponents:(const double *)a0;
- (struct CGColor { } *)_copyWhiteCGColorRef;
- (struct CGColor { } *)_copyBlackCGColorRef;
- (void)_layoutScreen;
- (void)_updateIOSurface;
- (struct CGImage { } *)_createImageWithName:(const char *)a0 scale:(int)a1 displayHeight:(int)a2;
- (void)_drawProgressLayerInContext:(struct CGContext { } *)a0;
- (const char *)_productSuffix;
- (const char *)_appleTVProductSuffix;
- (id)initWithForceInverted:(BOOL)a0;
- (id)initWithProgressBarVisibility:(BOOL)a0;
- (id)initWithProgressBarVisibility:(BOOL)a0 level:(float)a1;
- (id)initWithProgressBarVisibility:(BOOL)a0 context:(id)a1;

@end
