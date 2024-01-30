@protocol SXDocumentLayout;

@interface SXColumnLayout : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long layoutColumns;
@property (readonly, nonatomic) struct CGSize { double width; double height; } constrainedViewportSize;
@property (readonly, nonatomic) struct CGSize { double width; double height; } viewportSize;
@property (readonly, nonatomic) id<SXDocumentLayout> documentLayout;
@property (readonly, nonatomic) long long layoutWidth;
@property (readonly, nonatomic) double leftMargin;
@property (readonly, nonatomic) double rightMargin;
@property (readonly, nonatomic) long long gutter;
@property (readonly, nonatomic) unsigned long long numberOfColumns;
@property (readonly, nonatomic) double columnWidth;
@property (readonly, nonatomic) long long leftColumnOffset;
@property (nonatomic) long long rightColumnOffset;
@property (nonatomic) double leftInset;
@property (nonatomic) double rightInset;
@property (nonatomic) double minimumHeight;
@property (nonatomic) double minimumViewportWidthForLooseLayout;
@property (readonly, nonatomic) double leftScreenMargin;
@property (readonly, nonatomic) double rightScreenMargin;
@property (readonly, nonatomic) double contentScaleFactor;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })convertColumnRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 minimumColumnLength:(long long)a1;
- (double)widthForColumnRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 ignoreMargin:(unsigned long long)a1 ignoreGutter:(unsigned long long)a2 ignoreViewportPadding:(unsigned long long)a3;
- (id)columnLayoutForComponentBlueprint:(id)a0 unitConverter:(id)a1;
- (double)xPositionForColumnIndex:(long long)a0 ignoreMargin:(unsigned long long)a1 ignoreGutter:(unsigned long long)a2 ignoreViewportPadding:(unsigned long long)a3;
- (id)initWithConstrainedViewportSize:(struct CGSize { double x0; double x1; })a0 viewportSize:(struct CGSize { double x0; double x1; })a1 layoutWidth:(double)a2 documentLayout:(id)a3 numberOfLayoutColumns:(unsigned long long)a4 leftMargin:(double)a5 rightMargin:(double)a6 numberOfColumns:(unsigned long long)a7 columnWidth:(double)a8 leftScreenMargin:(double)a9 rightScreenMargin:(double)a10 contentScaleFactor:(double)a11;

@end
