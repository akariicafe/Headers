@class NSString, ADAdSpace;

@interface ADActionViewController : UIViewController <ADActionViewControllerInterface> {
    BOOL _readyForPresentation;
}

@property (weak, nonatomic) ADAdSpace *adSpace;
@property (readonly, nonatomic) BOOL readyForPresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)requestActionViewControllerForAdSpace:(id)a0;
+ (void)cancelRequestForActionViewControllerForAdSpaceController:(id)a0;

- (void).cxx_destruct;
- (void)loadView;
- (void)dismiss;
- (void)setReadyForPresentation:(BOOL)a0;
- (void)clientApplicationDidEnterBackground;
- (void)didSetAdSpace;
- (void)clientApplicationCancelledAction;
- (void)_remote_viewControllerCreatedForAdSpaceControllerWithIdentifier:(id)a0;

@end
