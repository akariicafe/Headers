@class NSString, UMUser, CSUserPictureView;

@interface CSUserPictureViewController : CSCoverSheetViewControllerBase <CSEventHandling> {
    UMUser *_user;
    CSUserPictureView *_userPictureView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isUserPictureSupported;
+ (Class)viewClass;

- (void)viewDidLoad;
- (long long)presentationStyle;
- (long long)presentationPriority;
- (id)view;
- (BOOL)handleEvent:(id)a0;
- (long long)presentationType;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)aggregateAppearance:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;

@end
