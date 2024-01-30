@class UIInterfaceActionVisualStyle, NSString, UIInterfaceActionGroupView, UIInterfaceActionGroup;
@protocol UIInterfaceActionVisualStyleProviding;

@interface UIInterfaceActionGroupViewController : UIViewController <UIInterfaceActionHandlerInvocationDelegate, UIInterfaceActionGroupDisplaying, UISpringLoadedInteractionSupporting>

@property (readonly, copy, nonatomic) UIInterfaceActionGroup *actionGroup;
@property (readonly, copy, nonatomic) UIInterfaceActionGroupView *actionGroupView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIInterfaceActionVisualStyle *visualStyle;
@property (weak, nonatomic) id<UIInterfaceActionVisualStyleProviding> visualStyleProvider;
@property (nonatomic, getter=isSpringLoaded) BOOL springLoaded;

- (void)willTransitionToTraitCollection:(id)a0 withTransitionCoordinator:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)interfaceAction:(id)a0 invokeActionHandler:(id /* block */)a1 completion:(id /* block */)a2;
- (void)viewWillDisappear:(BOOL)a0;
- (void)loadView;
- (void).cxx_destruct;
- (void)reloadVisualStyle;
- (id)initWithActionGroup:(id)a0;
- (id)defaultVisualStyleForTraitCollection:(id)a0 presentationStyle:(long long)a1;

@end
