@class PSUIPrefsListController;

@interface PSUIPrefsRootController : PSRootController {
    PSUIPrefsListController *_rootListController;
}

- (void)setViewControllers:(id)a0 animated:(BOOL)a1;
- (id)initWithTitle:(id)a0 identifier:(id)a1;
- (void)dealloc;
- (id)rootListController;
- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (void)setupControllerForToolbar:(id)a0;
- (void).cxx_destruct;
- (void)loadView;

@end
