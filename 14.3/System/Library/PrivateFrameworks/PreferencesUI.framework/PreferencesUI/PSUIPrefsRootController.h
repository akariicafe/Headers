@class PSUIPrefsListController;

@interface PSUIPrefsRootController : PSRootController {
    PSUIPrefsListController *_rootListController;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)loadView;
- (id)initWithTitle:(id)a0 identifier:(id)a1;
- (id)rootListController;
- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (void)setViewControllers:(id)a0 animated:(BOOL)a1;
- (void)setupControllerForToolbar:(id)a0;

@end
