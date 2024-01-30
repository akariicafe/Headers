@class NSString, NSMutableArray;

@interface OADGroup : OADDrawable <OADDrawableContainer> {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mLogicalBounds;
    NSMutableArray *mChildren;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addChild:(id)a0;
- (id)init;
- (id)children;
- (unsigned long long)childCount;
- (void).cxx_destruct;
- (void)removeChild:(id)a0;
- (void)addChildren:(id)a0;
- (id)childAtIndex:(unsigned long long)a0;
- (void)replaceChild:(id)a0 with:(id)a1;
- (id)groupProperties;
- (void)changeParentTextListStylePreservingEffectiveValues:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })logicalBounds;
- (void)removeUnnecessaryOverrides;
- (void)setLogicalBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setParentTextListStyle:(id)a0;

@end
