@class NSMutableArray;

@interface VUIAlertController : UIAlertController

@property (retain, nonatomic) NSMutableArray *alertActions;

+ (id)vui_alertControllerWithTitle:(id)a0 message:(id)a1 preferredStyle:(long long)a2;

- (void).cxx_destruct;
- (void)vui_dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)vui_addAction:(id)a0;
- (void)vui_addAction:(id)a0 isPreferred:(BOOL)a1;
- (void)vui_presentAlertFromPresentingController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;

@end
