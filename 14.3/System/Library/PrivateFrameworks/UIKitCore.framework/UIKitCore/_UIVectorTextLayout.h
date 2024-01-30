@class _UIVectorTextLayoutParameters, NSArray, _UIVectorTextLayoutInfo;

@interface _UIVectorTextLayout : NSObject {
    NSArray *_runs;
    unsigned long long _numberOfLines;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _boundingRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _usedBoundingRect;
    struct _NSRange { unsigned long long location; unsigned long long length; } _fitRange;
    double _firstLineBaseline;
    double _lastLineBaseline;
    _UIVectorTextLayoutInfo *_layoutInfo;
}

@property (readonly, copy, nonatomic) _UIVectorTextLayoutParameters *parameters;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } boundingRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } usedBoundingRect;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } textRange;
@property (readonly, nonatomic) unsigned long long numberOfLines;
@property (readonly, nonatomic) unsigned long long numberOfRuns;
@property (readonly, nonatomic) double firstLineBaseline;
@property (readonly, nonatomic) double lastLineBaseline;
@property (readonly, nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } coordinateAdjustment;

- (void).cxx_destruct;
- (id)layoutDescription;
- (id)description;
- (BOOL)hasLayout;
- (void)resetLayout;
- (id)initWithTextParameters:(id)a0;
- (void)enumerateRunsUsingBlock:(id /* block */)a0;
- (void)_layoutIfNeeded;

@end
