@protocol PREditingLookViewProviding;

@interface PREditorCombinedRootViewController : PREditorRootViewController

@property (retain, nonatomic) id<PREditingLookViewProviding> views;

- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)loadView;

@end
