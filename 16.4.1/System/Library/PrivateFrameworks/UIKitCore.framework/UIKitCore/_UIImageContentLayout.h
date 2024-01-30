@class UIColor, _UIImageContentRendition, drawScale;

@interface _UIImageContentLayout : NSObject {
    struct { unsigned char contentsIsCGImage : 1; unsigned char rendersContentAtNaturalSize : 1; } _flags;
    id /* block */ _contentInfoGenerator;
    struct { _UIImageContentRendition *rendition; drawScale *contents; double x0; } _contentInfo;
    double _baselineOffsetFromTop;
}

@property (readonly, nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } contentsTransform;
@property (readonly, nonatomic) double contentsScaleFactor;
@property (readonly, nonatomic) id contents;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (readonly, nonatomic) UIColor *contentsMultiplyColor;
@property (readonly, nonatomic) double baselineOffsetFromBottom;

+ (id)layoutForSource:(id)a0 inTarget:(id)a1 withSize:(struct CGSize { double x0; double x1; })a2;

- (void)drawInContext:(struct CGContext { } *)a0;
- (BOOL)hasContents;
- (id)description;
- (void).cxx_destruct;

@end
