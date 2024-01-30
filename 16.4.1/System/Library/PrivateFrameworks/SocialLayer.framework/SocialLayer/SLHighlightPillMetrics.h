@interface SLHighlightPillMetrics : NSObject {
    void /* unknown type, empty encoding */ metrics;
    void /* unknown type, empty encoding */ style;
    void /* unknown type, empty encoding */ tag;
    void /* unknown type, empty encoding */ variant;
    void /* unknown type, empty encoding */ $__lazy_storage_$_pillMetrics;
}

@property (nonatomic, readonly) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } margins;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } pillSize;
@property (nonatomic, readonly) BOOL hasValidMetricsForDrawing;
@property (nonatomic, readonly) const struct __CTLine { } *firstLine;
@property (nonatomic, readonly) const struct __CTLine { } *secondLine;
@property (nonatomic, readonly) double overlappedAvatarKnockoutBorderWidth;
@property (nonatomic, readonly) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } labelHorizontalMargins;
@property (nonatomic, readonly) double specMaxWidth;
@property (nonatomic, readonly) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } minimumLabelHorizontalMargines;
@property (nonatomic, readonly) double avatarDiameter;
@property (nonatomic, readonly) double avatarContainerWidth;
@property (nonatomic, readonly) double avatarKnockoutWidth;
@property (nonatomic, readonly) double overlappedAvatarVisibleWidth;
@property (nonatomic, readonly) BOOL useDoubleLinedLabel;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } chevronSize;
@property (nonatomic, readonly) long long imageCount;
@property (nonatomic, readonly) BOOL shouldDisplayPin;
@property (nonatomic, readonly) const struct __CTFontDescriptor { } *chevronFontDescriptor;
@property (nonatomic, readonly) const struct __CTFont { } *baseFont;

+ (id)accessibilityLabelFor:(id)a0;
+ (const struct __CTFontDescriptor { } *)chevronFontDescriptorWithStyle:(id)a0 variant:(unsigned long long)a1;
+ (struct CGSize { double x0; double x1; })chevronSizeWithStyle:(id)a0 variant:(unsigned long long)a1;
+ (long long)maxSendersToDisplayWithStyle:(id)a0 variant:(unsigned long long)a1;
+ (double)pillHeightWithStyle:(id)a0 variant:(unsigned long long)a1 maxWidth:(double)a2;
+ (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })pillMarginsWithStyle:(id)a0 variant:(unsigned long long)a1 maxWidth:(double)a2;
+ (const struct __CTLine { } *)truncatedLineFrom:(id)a0 maxWidth:(double)a1;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSlotStyle:(id)a0 tag:(id)a1;
- (id)initWithSlotStyle:(id)a0 tag:(id)a1 variant:(unsigned long long)a2;

@end
