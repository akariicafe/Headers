@class NSArray, NSMapTable, SKUIViewReusePool;

@interface SKUIViewReuseCollectionViewCell : SKUICollectionViewCell {
    NSMapTable *_allViewTextProperties;
    SKUIViewReusePool *_viewPool;
}

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInset;
@property (readonly, nonatomic) NSArray *allExistingViews;

- (void).cxx_destruct;
- (void)dealloc;
- (void)setBackgroundColor:(id)a0;
- (void)applyLayoutAttributes:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)modifyUsingBlock:(id /* block */)a0;
- (void)registerClass:(Class)a0 forViewWithReuseIdentifier:(id)a1;
- (void)enumerateExistingViewsForReuseIdentifier:(id)a0 usingBlock:(id /* block */)a1;
- (id)textPropertiesForView:(id)a0;
- (id)existingViewForIndex:(long long)a0;
- (id)existingViewsForReuseIdentifier:(id)a0;

@end
