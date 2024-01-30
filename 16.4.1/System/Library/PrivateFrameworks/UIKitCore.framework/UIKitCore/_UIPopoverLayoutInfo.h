@class NSMutableArray;

@interface _UIPopoverLayoutInfo : NSObject <NSCopying> {
    NSMutableArray *_candidates;
}

@property (nonatomic, getter=_updatesEnabled, setter=_setUpdatesEnabled:) BOOL updatesEnabled;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInset;
@property (nonatomic) double arrowHeight;
@property (nonatomic) double arrowOffset;
@property (nonatomic) struct CGSize { double width; double height; } preferredContentSize;
@property (nonatomic) unsigned long long preferredArrowDirections;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } containingFrame;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } containingFrameInsets;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceViewRect;
@property (nonatomic) BOOL canOverlapSourceViewRect;
@property (nonatomic) BOOL preferLandscapeOrientations;
@property (nonatomic) long long preferredHorizontalAlignment;
@property (nonatomic) BOOL isRTL;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (readonly, nonatomic) double offset;
@property (readonly, nonatomic) unsigned long long arrowDirection;

+ (id)_observationKeys;

- (id)candidates;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)init;
- (void)_updateOutputs;
- (id)description;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })_popoverViewSizeForContentSize:(struct CGSize { double x0; double x1; })a0 arrowDirection:(unsigned long long)a1;
- (void)updateProperties:(id /* block */)a0;

@end
