@class NSObject;
@protocol OS_dispatch_group;

@interface TSTableView : UITableView

@property (readonly, nonatomic) NSObject<OS_dispatch_group> *touchDeferGroup;
@property (nonatomic) long long touchDeferCounter;
@property (nonatomic) BOOL tsaxPrefersCustomReorderMessage;

+ (long long)ts_preferredStyleForStyle:(long long)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(long long)a1;
- (void).cxx_destruct;
- (id)_accessibilityReorderMessageForNewIndexPath:(id)a0 swappedWithRow:(long long)a1 movingDown:(BOOL)a2;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (id)contextualActionForDeletingRowAtIndexPath:(id)a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)_deferWhenTouchingWithBlock:(id /* block */)a0;

@end
