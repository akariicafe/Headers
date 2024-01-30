@class NSString, UIView, UISearchBar, UIViewController;
@protocol WFDrawerPane;

@interface WFDrawerItem : NSObject

@property (weak, nonatomic) UIViewController<WFDrawerPane> *drawerPane;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) UIView *titleView;
@property (retain, nonatomic) UISearchBar *searchBar;

- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)scrollViewWillBeginDragging:(id)a0;
- (id)initWithDrawerPane:(id)a0;

@end
