@class NSString, UIActivityIndicatorView;
@protocol VSLoadingViewControllerDelegate;

@interface VSLoadingViewController_iOS : UIViewController <VSLoadingViewController>

@property (retain, nonatomic) UIActivityIndicatorView *loadingIndicator;
@property (weak, nonatomic) id<VSLoadingViewControllerDelegate> delegate;
@property (nonatomic, getter=isCancellationAllowed) BOOL cancellationAllowed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
