@class UIWindow, UIPDFPageView, CAShapeLayer, UIView, CALayer;

@interface UIPDFMagnifierController : NSObject {
    UIWindow *_textEffectsWindow;
    UIView *_textEffectsSubView;
    CALayer *_loLayer;
    CALayer *_hiLayer;
    CALayer *_imageContainer;
    CALayer *_imageLayer;
    CAShapeLayer *_selectionLayer;
    CALayer *_maskLayer;
    double _power;
    struct CGSize { double width; double height; } _magnifierSize;
    BOOL _loupe;
    struct CGPoint { double x; double y; } _touchPoint;
    struct CGPoint { double x; double y; } _pointToMagnify;
    double _enlargementScale;
    CALayer *_leftBar;
    CALayer *_leftGrabber;
    CALayer *_rightBar;
    CALayer *_rightGrabber;
    struct CGSize { double width; double height; } _controlPointSize;
    struct CGColor { } *_grabberColor;
    unsigned long long _pageRotation;
    BOOL _visible;
}

@property (nonatomic) UIPDFPageView *pageView;

- (BOOL)visible;
- (id)init;
- (void)move;
- (void)_show;
- (void)dealloc;
- (void)drawLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (void)hide;
- (void)showMagnifier;
- (void)setPosition:(struct CGPoint { double x0; double x1; })a0 viewPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)showLoupe;
- (void)tearDownLayers;
- (void)placeImage;
- (void)setImageContainerMask;
- (void)setImageContainerPositionLoupe;
- (void)setImageContainerPositionMagnifier;
- (void)setTextRangeHandlePositions;
- (void)setSelectionPath;
- (void)setLayerPositions;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRectToRotatedPage:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGPoint { double x0; double x1; })convertPointToRotatedPage:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })viewPointInTextEffectsSpace;
- (struct CGPoint { double x0; double x1; })pointToMagnifyInPDFSpace;
- (struct CGPoint { double x0; double x1; })convertPointToEnlargedSpace:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRectToEnlargedSpace:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSelectionPath:(struct CGPath { } *)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2;
- (void)setPower;
- (id)imageReceived:(id)a0 data:(id)a1;
- (void)addBling;
- (void)addTextRangeHandles;
- (BOOL)isSelectionUniformlyRotated:(double *)a0;
- (struct CGPoint { double x0; double x1; })convertViewPointToEnlargedSpace:(struct CGPoint { double x0; double x1; })a0;

@end
