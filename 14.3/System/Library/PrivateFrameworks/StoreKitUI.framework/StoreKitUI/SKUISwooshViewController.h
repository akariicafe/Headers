@class SKUIClientContext, SKUIColorScheme;
@protocol SKUISwooshViewControllerDelegate;

@interface SKUISwooshViewController : UIViewController

@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (copy, nonatomic) SKUIColorScheme *colorScheme;
@property (weak, nonatomic) id<SKUISwooshViewControllerDelegate> delegate;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForItemAtIndex:(long long)a0;
- (id)indexPathsForVisibleItems;
- (void)deselectAllItems;
- (void)setImage:(id)a0 forItemAtIndex:(long long)a1;
- (id)popImageViewForItemAtIndex:(long long)a0;
- (void)unhideImages;

@end
