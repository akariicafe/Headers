@class UIScrollView, NSHashTable;

@interface SXViewport : NSObject

@property (retain, nonatomic) NSHashTable *dynamicBoundsListeners;
@property (retain, nonatomic) NSHashTable *boundsListeners;
@property (retain, nonatomic) NSHashTable *appearStateListeners;
@property (retain, nonatomic) NSHashTable *documentSizeListeners;
@property (retain, nonatomic) NSHashTable *contentFrameListeners;
@property (retain, nonatomic) NSHashTable *interfaceOrientationListeners;
@property (retain, nonatomic) SXViewport *viewportBeforeUpdates;
@property (nonatomic) BOOL groupChanges;
@property (readonly, weak, nonatomic) UIScrollView *view;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } dynamicBounds;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (nonatomic) unsigned long long appearState;
@property (nonatomic) struct CGSize { double width; double height; } documentSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentFrame;
@property (nonatomic) long long interfaceOrientation;
@property (readonly, nonatomic) BOOL isPopulated;

- (id)initWithView:(id)a0;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 toView:(id)a1;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 fromView:(id)a1;
- (void)endUpdates;
- (id)description;
- (void).cxx_destruct;
- (void)beginUpdates;
- (void)reset;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toView:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromView:(id)a1;
- (void)addViewportChangeListener:(id)a0 forOptions:(unsigned long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRectToViewportCoordinateSpace:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromView:(id)a1;
- (void)removeViewportChangeListener:(id)a0 forOptions:(unsigned long long)a1;
- (void)dynamicBoundsDidChangeFromBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)boundsDidChangeFromBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)appearStateChangedFromState:(unsigned long long)a0;
- (void)documentSizeDidChangeFromSize:(struct CGSize { double x0; double x1; })a0;
- (void)interfaceOrientationChangedFromOrientation:(long long)a0;
- (void)contentFrameDidChangeFromFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)stringForAppearState:(unsigned long long)a0;
- (id)stringFroInterfaceOrientation:(long long)a0;
- (id)debugDescriptionForViewport:(id)a0;
- (struct CGPoint { double x0; double x1; })convertPointToViewportCoordinateSpace:(struct CGPoint { double x0; double x1; })a0 fromView:(id)a1;

@end
