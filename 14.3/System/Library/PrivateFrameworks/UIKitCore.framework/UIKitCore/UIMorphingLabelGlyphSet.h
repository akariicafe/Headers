@class UIMorphingLabel, NSMutableArray, NSAttributedString;

@interface UIMorphingLabelGlyphSet : NSObject {
    UIMorphingLabel *_label;
    struct __CTLine { } *_line;
}

@property (readonly, nonatomic) unsigned long long glyphCount;
@property (readonly, nonatomic) unsigned short *glyphs;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *glyphFrames;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } *glyphPositions;
@property (readonly, nonatomic) NSMutableArray *glyphViews;
@property (readonly, nonatomic) NSAttributedString *attributedString;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } lineOrigin;
@property (readonly, nonatomic) double lineWidth;

- (void)dealloc;
- (void)placeGlyphs;
- (void)removeGlyphs;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundingRectForGlyphsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)initWithLabel:(id)a0 attributedString:(id)a1;
- (void)buildGlyphViews;

@end
