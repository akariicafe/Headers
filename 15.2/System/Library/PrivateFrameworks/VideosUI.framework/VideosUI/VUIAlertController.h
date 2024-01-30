@interface VUIAlertController : UIAlertController

+ (id)vui_alertControllerWithTitle:(id)a0 message:(id)a1 preferredStyle:(long long)a2;

- (void)vui_addAction:(id)a0;
- (void)vui_presentAlertFromPresentingController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)vui_addAction:(id)a0 isPreferred:(BOOL)a1;

@end
