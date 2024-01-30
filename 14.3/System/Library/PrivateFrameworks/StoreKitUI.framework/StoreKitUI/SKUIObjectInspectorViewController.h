@class UITableView, NSMutableArray, UIVisualEffectView, NSString, UIView, _SKUIInspectablePropertySection, UINavigationBar;
@protocol SKUIInspectableObject;

@interface SKUIObjectInspectorViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UIViewControllerTransitioningDelegate, SKUIObjectInspector>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIVisualEffectView *backgroundView;
@property (retain, nonatomic) UINavigationBar *navigationBar;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) id<SKUIInspectableObject> inspectableObject;
@property (retain, nonatomic) _SKUIInspectablePropertySection *currentSection;
@property (retain, nonatomic) NSMutableArray *sections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *friendlyName;
@property (copy, nonatomic) NSString *information;

+ (void)showInspectableObject:(id)a0;

- (void)setupConstraints;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)done:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)populate;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)dismiss;
- (void)viewDidLoad;
- (void)beginSectionWithFriendlyName:(id)a0;
- (void)exposePropertyWithFriendlyName:(id)a0 value:(id)a1;
- (void)endSection;
- (id)initWithInspectableObject:(id)a0;
- (void)showFromViewController:(id)a0;
- (void)handleBackgroundTap:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateContentViewFrameWithParentBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withTraitCollection:(id)a1;

@end
