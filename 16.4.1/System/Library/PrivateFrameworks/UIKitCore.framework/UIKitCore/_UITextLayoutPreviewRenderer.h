@class NSString, UIImage, NSTextRange, NSTextLayoutManager;

@interface _UITextLayoutPreviewRenderer : NSObject <_UITextPreviewRenderer> {
    BOOL _calculated;
    BOOL _unifyRects;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _firstRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _lastRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _middleRect;
    UIImage *_image;
}

@property (readonly, nonatomic) NSTextLayoutManager *textLayoutManager;
@property (readonly, nonatomic) NSTextRange *range;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } firstLineRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bodyRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } lastLineRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_updateDataIfNeeded;
- (void)addRenderingAttributes:(id)a0;
- (id)initWithTextLayoutManager:(id)a0 range:(id)a1 unifyRects:(BOOL)a2;
- (void)removeRenderingAttributes:(id)a0;

@end
