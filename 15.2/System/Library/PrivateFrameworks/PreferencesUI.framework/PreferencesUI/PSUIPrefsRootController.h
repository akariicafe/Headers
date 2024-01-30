@class PSUIPrefsListController;

@interface PSUIPrefsRootController : PSRootController {
    PSUIPrefsListController *_rootListController;
}

- (void)setViewControllers:(id)a0 animated:(BOOL)a1;
- (id)initWithTitle:(id)a0 identifier:(id)a1;
- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (id)rootListController;
- (void)loadView;
- (void)setupControllerForToolbar:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
