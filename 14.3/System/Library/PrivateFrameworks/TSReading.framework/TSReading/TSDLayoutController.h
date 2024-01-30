@class TSDRootLayout, NSMutableSet, TSDCanvas, TSDLayout;

@interface TSDLayoutController : NSObject {
    TSDCanvas *mCanvas;
    TSDRootLayout *mRootLayout;
    struct __CFDictionary { } *mLayoutsByInfo;
    NSMutableSet *mInvalidLayouts;
    NSMutableSet *mLayoutsNeedingRecreating;
    NSMutableSet *mInvalidChildrenLayouts;
    TSDLayout *mValidatingLayout;
}

+ (void)temporaryLayoutControllerForInfos:(id)a0 useInBlock:(id /* block */)a1;
+ (id)allInteractiveLayoutControllers;

- (id)canvas;
- (void)dealloc;
- (void)setInfos:(id)a0;
- (id)initWithCanvas:(id)a0;
- (id)rootLayout;
- (void)unregisterLayout:(id)a0;
- (void)preregisterLayout:(id)a0;
- (id)validatedLayoutForInfo:(id)a0;
- (id)layoutForInfo:(id)a0;
- (void)validateLayoutWithDependencies:(id)a0;
- (BOOL)isLayoutOffscreen;
- (id)layoutsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutForInfo:(id)a0 childOfLayout:(id)a1;
- (id)layoutsForInfo:(id)a0;
- (void)invalidateLayout:(id)a0;
- (void)invalidateChildrenOfLayout:(id)a0;
- (id)layoutGeometryProviderForLayout:(id)a0;
- (void)i_registerLayout:(id)a0;
- (void)i_unregisterLayout:(id)a0;
- (void)validateLayouts;
- (void)validateLayouts:(id)a0;
- (id)sortLayoutsForDependencies:(id)a0;
- (void)validateOrderedLayouts:(id)a0;
- (void)validateLayoutsWithDependencies:(id)a0;
- (id)validatedLayoutsForInfo:(id)a0;
- (void)invalidateLayoutForRecreation:(id)a0;
- (id)layoutsForInfos:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectOfTopLevelLayouts;
- (id)validatedLayoutForInfo:(id)a0 childOfLayout:(id)a1;
- (void)i_removeAllLayouts;
- (id)ancestorLayoutOfLayout:(id)a0 orDelegateConformingToProtocol:(id)a1;

@end
