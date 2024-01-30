@class NSString;

@interface VideosUI.DocumentRequestViewController : VideosUI.DocumentViewController <IAMMessageTarget> {
    void /* unknown type, empty encoding */ viewWillAppearAfterTabSwitch;
    void /* unknown type, empty encoding */ viewControllerIdentifier;
    void /* unknown type, empty encoding */ staticPPTDocumentFolderPath;
    void /* unknown type, empty encoding */ viewControllerDocumentIdentifier;
    void /* unknown type, empty encoding */ documentType;
    void /* unknown type, empty encoding */ initialControllerRef;
    void /* unknown type, empty encoding */ initialRequestSent;
    void /* unknown type, empty encoding */ inAppBannerAllowed;
    void /* unknown type, empty encoding */ inAppBannerNotificationPending;
    void /* unknown type, empty encoding */ activeServiceRequest;
    void /* unknown type, empty encoding */ activeFragmentServiceRequest;
    void /* unknown type, empty encoding */ eventMonitorController;
    void /* unknown type, empty encoding */ shouldHideLoadingView;
    void /* unknown type, empty encoding */ isWaitingForDocumentFragment;
}

@property (nonatomic, readonly) NSString *targetIdentifier;
@property (nonatomic, readonly) NSString *viewControllerIdentifier;

- (void)messageCoordinator:(id)a0 didUpdatePriorityMessage:(id)a1 forTarget:(id)a2;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidLoad;

@end
