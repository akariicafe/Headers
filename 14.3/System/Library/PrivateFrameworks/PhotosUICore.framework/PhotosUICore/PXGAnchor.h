@class PXGLayout, NSArray, NSString, NSDate;
@protocol PXGAnchorDelegate;

@interface PXGAnchor : NSObject <PXGSpriteIndexReferencing, PXGDiagnosticsProvider> {
    struct { BOOL visibleRectOriginForProposedVisibleRectForLayout; } _delegateRespondsTo;
}

@property (readonly, weak, nonatomic) PXGLayout *layout;
@property (nonatomic) long long type;
@property (nonatomic) long long priority;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleRect;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (copy, nonatomic) NSArray *spriteReferences;
@property (copy, nonatomic) NSArray *spriteRects;
@property (nonatomic) unsigned long long referencingOptions;
@property (nonatomic) unsigned long long edges;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (nonatomic) unsigned long long scrollPosition;
@property (retain, nonatomic) NSDate *date;
@property (copy, nonatomic) NSArray *constraints;
@property (copy, nonatomic) id /* block */ customOffset;
@property (nonatomic) struct CGPoint { double x; double y; } visibleLocation;
@property (nonatomic) struct CGPoint { double x; double y; } normalizedAnchorPoint;
@property (nonatomic) BOOL needsUpdate;
@property (readonly, nonatomic, getter=isAutoInvalidated) BOOL autoInvalidated;
@property (readonly, nonatomic) unsigned long long anchoredContentEdges;
@property (readonly, nonatomic) BOOL shouldFaultInContentAtAnchoredContentEdges;
@property (readonly, nonatomic) BOOL isScrollingAnimationAnchor;
@property (readonly, nonatomic) BOOL canBeReused;
@property (weak, nonatomic) id<PXGAnchorDelegate> delegate;
@property (retain, nonatomic) id context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *diagnosticDescription;

- (id)autoInvalidate;
- (id)init;
- (void).cxx_destruct;
- (unsigned int)anchoredSpriteIndexInLayout:(id)a0;
- (void)adjustReferencedSpriteIndexesWithChangeDetails:(id)a0 appliedToLayout:(id)a1;
- (void)enumerateAllSpriteReferencesUsingBlock:(id /* block */)a0;
- (id)initWithLayout:(id)a0;
- (void)enumerateSpritesWithEnumerationOptions:(unsigned long long)a0 referencingOptions:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adjustVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)invalidate;
- (id)copyWithLayout:(id)a0;
- (void)_enumerateSpriteConstraintsUsingBlock:(id /* block */)a0;

@end
