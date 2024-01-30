@class CALayer, NSMutableArray;

@interface BubbleTextLayer : CALayer {
    struct CGSize { double width; double height; } _textSize;
    struct CGSize { double width; double height; } _leftImageLayerSize;
    struct CGSize { double width; double height; } _rightAccessoryLayerSize;
    struct CGSize { double width; double height; } _contentSize;
    struct CGSize { double width; double height; } _bubbleSize;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _textFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _bubbleFrame;
    struct CGSize { double width; double height; } _boundsSizeConstraint;
    void *_font;
    struct __CTFont { } *_curCTFont;
    struct __CTLine { } *_theLine;
    double _descent;
    double _ascent;
    double _leading;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _fontBounds;
    NSMutableArray *_annotationPoints;
    struct CGColor { } *_generalShadowColor;
    struct CGColor { } *_whiteShadowColor;
    CALayer *_leftImageLayer;
    CALayer *_rightAccessoryLayer;
    id _owningView;
}

@property (nonatomic) id owningView;
@property (retain, nonatomic) struct CGImage { } *image;
@property (retain, nonatomic) CALayer *rightAccessoryLayer;
@property (retain, nonatomic) struct CGColor { } *fillColor;
@property (retain, nonatomic) struct CGColor { } *fillColor2;
@property (retain, nonatomic) struct CGColor { } *frameColor;
@property (retain, nonatomic) struct CGColor { } *foregroundColor;
@property (nonatomic) double frameWidth;
@property (nonatomic) double fontSize;
@property (retain, nonatomic) id string;
@property (readonly, nonatomic) double textBaselineOffset;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } textFrame;
@property (nonatomic) struct CGSize { double x0; double x1; } boundsSizeConstraint;

+ (BOOL)needsDisplayForKey:(id)a0;

- (void)drawInContext:(struct CGContext { } *)a0;
- (void)setFont:(id)a0;
- (void)dealloc;
- (void)layoutSublayers;
- (struct CGSize { double x0; double x1; })preferredFrameSize;
- (id)initWithOwningView:(id)a0;
- (struct CGSize { double x0; double x1; })calculatePreferredSubframeSizes;
- (void)addAnnotationPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })getImagePreferredSize;
- (struct CGSize { double x0; double x1; })getRightAccessoryLayerPreferredSize;
- (BOOL)isAnnotationBubble;
- (struct CGSize { double x0; double x1; })textPreferredFrameSizeForLayerSize:(struct CGSize { double x0; double x1; })a0;

@end
