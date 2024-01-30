@class NSArray;

@interface VideosUI.MultiPlayerViewController : UIViewController <VUIMultiPlayerViewController> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_playerViewLayout;
    void /* unknown type, empty encoding */ fullscreenPlayerViewController;
    void /* unknown type, empty encoding */ isDetailsViewControllerVisible;
    void /* unknown type, empty encoding */ playerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_distributionPicker;
    void /* unknown type, empty encoding */ detailsViewController;
    void /* unknown type, empty encoding */ presentationPlayerViewControllers;
    void /* unknown type, empty encoding */ bottomConstraint;
    void /* unknown type, empty encoding */ cancellables;
    void /* unknown type, empty encoding */ stateMachine;
    void /* unknown type, empty encoding */ initiallyShowsDetails;
}

@property (nonatomic, readonly) NSArray *playerViewControllers;
@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic, readonly) unsigned long long distribution;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)addPlayerViewController:(id)a0 animated:(BOOL)a1;
- (void)enterFullscreenWithPlayerViewController:(id)a0 completion:(id /* block */)a1;
- (void)exitFullscreenWithCompletion:(id /* block */)a0;
- (void)removePlayerViewController:(id)a0 animated:(BOOL)a1;

@end
