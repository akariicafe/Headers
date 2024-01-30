@class NSString, SUICProgressEventViewController, UIActivityIndicatorView, UIView, PLExpandedPlatterView, UITapGestureRecognizer;
@protocol PLClickPresentationInteractionPresenting, APUILongLookViewControllerDataSource, APUILongLookViewControllerDelegate;

@interface APUILongLookViewController : UIViewController <PLClickPresentationInteractionPresentable, PLExpandedPlatterPresentationViewDelegate> {
    SUICProgressEventViewController *_progressEventViewController;
    UIActivityIndicatorView *_activityIndicatorView;
    BOOL _suppressSpinner;
}

@property (retain, nonatomic) PLExpandedPlatterView *expandedPlatterView;
@property (retain, nonatomic) UITapGestureRecognizer *platterTapGestureRecognizer;
@property (weak, nonatomic) id<APUILongLookViewControllerDataSource> dataSource;
@property (weak, nonatomic) id<APUILongLookViewControllerDelegate> delegate;
@property (weak, nonatomic) id<PLClickPresentationInteractionPresenting> presenter;
@property (readonly, nonatomic) UIView *viewWithContent;
@property (readonly, nonatomic) UIView *viewForTouchContinuation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (BOOL)_canShowWhileLocked;
- (void)_setActions:(id)a0;
- (void)loadView;
- (void).cxx_destruct;
- (void)_dismissButtonTapped:(id)a0;
- (void)_setCustomContentViewController:(id)a0;
- (id)expandedPlatterViewForPresentationView:(id)a0;
- (void)_setupContentView;
- (void)setExpandedPlatterSize:(struct CGSize { double x0; double x1; })a0;
- (void)_platterDidReceiveTap:(id)a0;
- (void)_setupProgressIndicator;
- (void)_platterUtilityButtonTapped:(id)a0;

@end
