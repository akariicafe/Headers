@class NSMutableArray;
@protocol CACLabeledElementsOverlayManagerDelegate;

@interface CACLabeledElementsOverlayManager : CACSimpleContentViewManager

@property (weak, nonatomic) id<CACLabeledElementsOverlayManagerDelegate> delegate;
@property (readonly, nonatomic) NSMutableArray *labeledElements;

+ (void)assignNumbersToLabeledElements:(id)a0 numberingStrategy:(int)a1;

- (void).cxx_destruct;
- (BOOL)isOverlay;
- (void)hideAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)startDelayedDimmingOfNumbers;
- (void)stopDelayedDimmingOfNumbers;
- (void)clearLabeledElements;
- (void)showLabeledElementsOverlayWithLabeledElements:(id)a0 forceNoArrow:(BOOL)a1;
- (void)addLabeledElements:(id)a0 forceNoArrow:(BOOL)a1;
- (id)_optimizeLabeledElements:(id)a0 startingNumberedLabelsAtIndex:(unsigned long long)a1 forceNoArrow:(BOOL)a2;
- (id)_findLabeledElementsThatIntersectsLabelRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromLabeledElement:(id)a1 justLabelRect:(BOOL)a2 additionalElements:(id)a3;
- (void)showLabeledElementsOverlayWithLabeledElements:(id)a0;

@end
