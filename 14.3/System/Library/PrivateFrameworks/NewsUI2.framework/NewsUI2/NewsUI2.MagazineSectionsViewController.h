@class UIView;

@interface NewsUI2.MagazineSectionsViewController : UIViewController <TSPluginContainerViewProviding, TUPluggableDelegate> {
    void /* unknown type, empty encoding */ styler;
    void /* unknown type, empty encoding */ eventHandler;
    void /* unknown type, empty encoding */ sectionViewControllerFactory;
    void /* unknown type, empty encoding */ miniMastheadViewProvider;
    void /* unknown type, empty encoding */ categoriesPluginView;
    void /* unknown type, empty encoding */ viewControllerCache;
    void /* unknown type, empty encoding */ coverViewManager;
    void /* unknown type, empty encoding */ eventManager;
    void /* unknown type, empty encoding */ currentSection;
    void /* unknown type, empty encoding */ currentViewController;
    void /* unknown type, empty encoding */ presentation;
}

@property (nonatomic, readonly) UIView *pluginView;

- (void)didReceiveMemoryWarning;
- (void)pluggableViewController:(id)a0 didChangeSizeTo:(struct CGSize { double x0; double x1; })a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
