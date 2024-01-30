@class _UILabelConfiguration, _UILabelSynthesizedContent, _UILabelScaledMetrics, NSDictionary, NSStringDrawingContext;

@interface _UILabelMetrics : NSObject <NSCopying, NSSecureCoding> {
    NSStringDrawingContext *_stringDrawingContext;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _sourceRect;
    _UILabelSynthesizedContent *_synthesizedContent;
    _UILabelScaledMetrics *_scaledMetrics;
    double _firstBaselineOffset;
    double _lastBaselineOffset;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _drawingRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _bounds;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _idealBounds;
    long long _numberOfLines;
    double _scaleFactor;
    id _textToUse;
    NSDictionary *_attributesToUse;
    id _layout;
    _UILabelScaledMetrics *_associatedScaledMetrics;
    struct { unsigned char calculated : 1; unsigned char contentSynthesized : 1; unsigned char textToUseIsAttributed : 1; unsigned char forDrawing : 1; unsigned char intrinsicMeasurement : 1; } _metricsFlags;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } _sourceRect;
@property (readonly, nonatomic) double _lastLineBaselineOffsetFromTop;
@property (readonly, nonatomic) struct { double x0; double x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; long long x3; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x4; } _intrinsicSizeBaselineInfo;
@property (readonly, nonatomic) NSStringDrawingContext *_stringDrawingContext;
@property (readonly, nonatomic) _UILabelSynthesizedContent *_synthesizedContent;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } _intrinsicBaselineSize;
@property (readonly, nonatomic) _UILabelConfiguration *configuration;
@property (readonly, nonatomic) double firstLineBaselineOffsetFromTop;
@property (readonly, nonatomic) double lastLineBaselineOffsetFromBottom;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } drawingBounds;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (readonly, nonatomic) long long numberOfLines;
@property (readonly, nonatomic) double scaleFactor;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } intrinsicBounds;

+ (id)intrinsicMetricsWithConfiguration:(id)a0;
+ (id)metricsWithConfiguration:(id)a0;

- (id)_initWithConfiguration:(id)a0 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 synthesizedContent:(id)a2 associatedScaledMetrics:(id)a3;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_hyphenationPossiblyDisabledIfURLsDetected;
- (void)draw;
- (id)description;
- (double)_lineSpacing;
- (void)_calculatedSynthesizedContentIfNeeded;
- (void)_calculateScaledMetricsUsingSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_synthesizedAttributedText;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_ensureSynthesizedContent;
- (id)_synthesizedAttributes;
- (unsigned long long)hash;

@end
