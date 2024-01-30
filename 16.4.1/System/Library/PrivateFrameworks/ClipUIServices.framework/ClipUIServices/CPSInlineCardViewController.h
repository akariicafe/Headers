@class NSString, NSURL, PRXCardContainerViewController, CPSLaunchContentViewController;
@protocol CPSInlineCardViewControllerDelegate;

@interface CPSInlineCardViewController : UIViewController <CPSLaunchContentViewControllerDelegate, CPSInlineCardViewDelegate> {
    CPSLaunchContentViewController *_launchContentViewController;
    PRXCardContainerViewController *_proxController;
}

@property (readonly, copy, nonatomic) NSURL *url;
@property (weak, nonatomic) id<CPSInlineCardViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)_setupInlineCardViewWithProxCardKit;
- (void)didTapBackgroundView:(id)a0;
- (void)launchContentViewController:(id)a0 didTapCloseButton:(BOOL)a1;
- (void)launchContentViewControllerDidDisappear:(id)a0 didOpenClip:(BOOL)a1;

@end
