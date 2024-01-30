@class NSString, FBSMutableSceneSettings, PRPosterEnvironmentImpl;
@protocol PRRenderingEnvironmentViewControllerDelegate;

@interface PRRenderingEnvironmentViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    id<PRRenderingEnvironmentViewControllerDelegate> _delegate;
    FBSMutableSceneSettings *_settings;
}

@property (readonly, nonatomic) PRPosterEnvironmentImpl *currentEnvironment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewDidLoad;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)cell:(id)a0 presentViewController:(id)a1;
- (void)cell:(id)a0 valueChanged:(id)a1;
- (id)initWithEnvironment:(id)a0 delegate:(id)a1;

@end
