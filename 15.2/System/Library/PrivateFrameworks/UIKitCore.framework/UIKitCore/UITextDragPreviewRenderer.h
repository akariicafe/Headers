@class UIImage, NSLayoutManager, NSString;

@interface UITextDragPreviewRenderer : NSObject <_UITextPreviewRenderer> {
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _firstRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _lastRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _middleRect;
    struct CGPoint { double x; double y; } _origin;
    UIImage *_image;
    BOOL _calculated;
    BOOL _unifyRects;
}

@property (readonly, nonatomic) NSLayoutManager *layoutManager;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } firstLineRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bodyRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } lastLineRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLayoutManager:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 unifyRects:(BOOL)a2;
- (void)addRenderingAttributes:(id)a0;
- (void)removeRenderingAttributes:(id)a0;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rawBoundingRect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_correctlyOffsetBoundingRect;
- (void)_calculateRectsUsingLayoutManager:(id)a0;
- (id)initWithLayoutManager:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)adjustFirstLineRect:(inout struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 bodyRect:(inout struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 lastLineRect:(inout struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2 textOrigin:(struct CGPoint { double x0; double x1; })a3;
- (void)_calculate;

@end
