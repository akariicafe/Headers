@class NSArray, SKUIViewReusePool;

@interface SKUIViewReuseView : UIView {
    SKUIViewReusePool *_viewReusePool;
}

@property (readonly, nonatomic) NSArray *allExistingViews;

- (void).cxx_destruct;
- (void)dealloc;
- (void)setBackgroundColor:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)modifyUsingBlock:(id /* block */)a0;
- (void)registerClass:(Class)a0 forViewWithReuseIdentifier:(id)a1;
- (void)enumerateExistingViewsForReuseIdentifier:(id)a0 usingBlock:(id /* block */)a1;

@end
