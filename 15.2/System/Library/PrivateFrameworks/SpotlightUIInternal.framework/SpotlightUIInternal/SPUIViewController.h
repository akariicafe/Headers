@class NSString, SPUIResultsViewController;
@protocol SPUIViewControllerDelegate;

@interface SPUIViewController : UIViewController <SPUIResultsViewDelegate, SearchUIResultsViewDelegate, SearchUICommandDelegate, SFFeedbackListener>

@property (retain) SPUIResultsViewController *searchResultViewController;
@property (weak, nonatomic) id<SPUIViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isFeedbackSelector:(SEL)a0;

- (void)willUpdateFromResultsWithHighlightedResult:(id)a0;
- (void)didUpdateActiveViewController;
- (id)commandExecutorForCommand:(id)a0;
- (void)activateViewController:(id)a0 animate:(BOOL)a1;
- (id)viewControllerForPresenting;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)activeViewController;
- (void)didTapInEmptyRegion;
- (id)contentScrollView;
- (void)getUserActivityForResult:(id)a0 completionHandler:(id /* block */)a1;
- (void)willUpdateActiveViewController;
- (id)commandEnvironment;
- (void).cxx_destruct;
- (id)init;
- (id)currentQuery;
- (BOOL)respondsToSelector:(SEL)a0;

@end
