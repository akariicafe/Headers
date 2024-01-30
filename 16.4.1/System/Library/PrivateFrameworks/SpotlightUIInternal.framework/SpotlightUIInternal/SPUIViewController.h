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

- (void)didTapInEmptyRegion;
- (void)didUpdateActiveViewController;
- (id)viewControllerForPresenting;
- (id)activeViewController;
- (id)currentQuery;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)willUpdateActiveViewController;
- (id)contentScrollView;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)init;
- (void)willUpdateFromResultsWithHighlightedResult:(id)a0 viewController:(id)a1;
- (void).cxx_destruct;
- (void)activateViewController:(id)a0 animate:(BOOL)a1;

@end
