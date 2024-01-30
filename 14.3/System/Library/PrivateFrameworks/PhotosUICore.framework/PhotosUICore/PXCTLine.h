@class NSShadow, PXCTFrame, NSString, NSAttributedString;

@interface PXCTLine : NSObject {
    BOOL _prepared;
    double _width;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _imageBounds;
}

@property (readonly, nonatomic) const struct __CTLine { } *line;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } origin;
@property (readonly, weak, nonatomic) PXCTFrame *frame;
@property (readonly, nonatomic) NSAttributedString *referenceAttributedString;
@property (readonly, nonatomic) double ascent;
@property (readonly, nonatomic) double descent;
@property (readonly, nonatomic) struct CGContext { } *context;
@property (readonly, nonatomic) NSShadow *shadow;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } stringRange;
@property (readonly, nonatomic) NSString *string;
@property (readonly, nonatomic) double width;
@property (readonly, nonatomic) double ascentPosition;
@property (readonly, nonatomic) double baselinePosition;
@property (readonly, nonatomic) double descentPosition;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } textPosition;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } contentBounds;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } imageBounds;
@property (readonly, nonatomic, getter=isTruncated) BOOL truncated;
@property (readonly, nonatomic, getter=isEndOfString) BOOL endOfString;
@property (readonly, nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transform;

- (void)scaleBy:(double)a0;
- (void)draw;
- (void)prepare;
- (void)scaleVerticallyBy:(double)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)translateVerticallyBy:(double)a0;
- (id)description;
- (void)_transformBy:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)translateHorizontallyBy:(double)a0;
- (id)initWithLine:(struct __CTLine { } *)a0 origin:(struct CGPoint { double x0; double x1; })a1 frame:(id)a2 referenceAttributedString:(id)a3 truncated:(BOOL)a4;
- (const struct CGPath { } *)createPath;

@end
