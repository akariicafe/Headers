@class NSMapTable, TSDRootLayout, TSDCanvas, NSMutableSet, TSDLayout;

@interface TSDLayoutController : NSObject {
    NSMapTable *_layoutsByInfo;
    NSMutableSet *_invalidLayouts;
    NSMutableSet *_layoutsNeedingRecreating;
    NSMutableSet *_invalidChildrenLayouts;
    TSDLayout *_validatingLayout;
}

@property (readonly, weak, nonatomic) TSDCanvas *canvas;
@property (readonly, nonatomic) TSDRootLayout *rootLayout;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } rectOfTopLevelLayouts;

+ (void)temporaryLayoutControllerForInfos:(id)a0 useInBlock:(id /* block */)a1;
+ (id)allInteractiveLayoutControllers;

- (void).cxx_destruct;
- (void)dealloc;
- (void)setInfos:(id)a0;
- (id)initWithCanvas:(id)a0;
- (id)validatedLayoutForInfo:(id)a0;
- (id)layoutForInfo:(id)a0;
- (void)validateLayoutWithDependencies:(id)a0;
- (id)layoutsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutForInfo:(id)a0 childOfLayout:(id)a1;
- (id)layoutsForInfo:(id)a0;
- (void)invalidateLayout:(id)a0;
- (void)invalidateChildrenOfLayout:(id)a0;
- (void)i_registerLayout:(id)a0;
- (void)i_unregisterLayout:(id)a0;
- (void)validateLayouts;
- (id)sortLayoutsForDependencies:(id)a0;
- (void)validateLayoutsWithDependencies:(id)a0;
- (id)validatedLayoutsForInfo:(id)a0;
- (void)invalidateLayoutForRecreation:(id)a0;
- (id)layoutsForInfos:(id)a0;
- (id)validatedLayoutForInfo:(id)a0 childOfLayout:(id)a1;
- (void)i_removeAllLayouts;
- (id)layoutsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 deep:(BOOL)a1;
- (void)p_recreateLayoutsIfNeededToValidateLayouts:(id)a0;
- (void)p_validateLayouts:(id)a0 shouldMarkValidLayoutsThatDoNotWantValidation:(BOOL)a1;
- (void)notifyThatLayoutsChangedOutsideOfLayout;
- (void)i_enumerateLayoutsUsingBlock:(id /* block */)a0;

@end
