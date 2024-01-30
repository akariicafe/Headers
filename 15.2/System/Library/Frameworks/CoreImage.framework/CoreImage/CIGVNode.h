@class NSMutableArray;

@interface CIGVNode : GVNode {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } extent;
    struct CGSize { double width; double height; } titleSize;
    struct CGSize { double width; double height; } labelSize;
    struct CGSize { double width; double height; } imagesSize;
    struct CGSize { double width; double height; } roisSize;
    struct CGSize { double width; double height; } badgeSize;
    struct CGSize { double width; double height; } contentSize;
    NSMutableArray *images;
    NSMutableArray *rois;
}

@property (class, readonly) struct __CFDictionary { } *textAttributesForTitle;
@property (class, readonly) struct __CFDictionary { } *textAttributesForLabel;

@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } extent;
@property (nonatomic) int shape;
@property (nonatomic) int color;
@property (nonatomic) struct __CFString { } *title;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } titleFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } badgeFrame;
@property (nonatomic) struct __CFString { } *label;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } labelFrame;
@property (readonly, nonatomic) struct __CFArray { } *images;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } imagesFrame;
@property (readonly, nonatomic) struct __CFArray { } *rois;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } roisFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } contentFrame;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } contentInsertSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } contentCornerSize;

- (void)updateContentSize;
- (void)addRoi:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)description;
- (void)updateSize;
- (void)updateBadgeSize;
- (id)initWithCINode:(void *)a0 extent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)addImage:(struct CGImage { } *)a0;
- (id)init;
- (void)dealloc;

@end
