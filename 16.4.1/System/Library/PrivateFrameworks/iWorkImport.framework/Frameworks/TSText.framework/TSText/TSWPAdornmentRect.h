@class TSDShadow, TSUBezierPath, TSUSparseArray, TSDFill, TSDStroke;

@interface TSWPAdornmentRect : NSObject

@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;
@property (readonly, nonatomic) TSDStroke *stroke;
@property (readonly, nonatomic) TSDFill *fill;
@property (retain, nonatomic) TSDShadow *shadow;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (readonly, copy, nonatomic) TSUBezierPath *path;
@property (readonly, copy, nonatomic) TSUSparseArray *paths;
@property (readonly, copy, nonatomic) TSUSparseArray *rubyPaths;

- (void).cxx_destruct;
- (id)initWithCharacterFill:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 paths:(id)a3 rubyPaths:(id)a4;
- (id)initWithCharacterFillAdornmentState:(id)a0;
- (id)initWithCharacterStroke:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 paths:(id)a3 rubyPaths:(id)a4;
- (id)initWithCharacterStrokeAdornmentState:(id)a0;
- (id)initWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fill:(id)a1;
- (id)initWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 stroke:(id)a1;
- (id)initWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 stroke:(id)a1 fill:(id)a2 type:(int)a3;
- (id)initWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 stroke:(id)a1 fill:(id)a2 type:(int)a3 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4 paths:(id)a5 rubyPaths:(id)a6;
- (id)initWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 stroke:(id)a1 fill:(id)a2 type:(int)a3 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4 paths:(id)a5 rubyPaths:(id)a6 shadow:(id)a7;
- (id)pathFromExcludeRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 limitSelection:(id)a1 rubyGlyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;

@end
