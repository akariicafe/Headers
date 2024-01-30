@class NSString, UIImage, AMSUIBannerAppearance, AMSDialogRequest, AMSBinaryPromise;
@protocol AMSUIMessageViewControllerDelegate;

@interface AMSUIBannerMessageViewController : UIViewController <AMSUIMessageViewController>

@property (nonatomic) BOOL didEnqueueMetrics;
@property (nonatomic) BOOL isLoadingImage;
@property (retain, nonatomic) UIImage *loadedImage;
@property (retain, nonatomic) AMSDialogRequest *request;
@property (retain, nonatomic) AMSUIBannerAppearance *requestAppearance;
@property (weak, nonatomic) id<AMSUIMessageViewControllerDelegate> delegate;
@property (retain, nonatomic) AMSBinaryPromise *loadPromise;
@property (retain, nonatomic) AMSUIBannerAppearance *preferredAppearance;
@property (nonatomic) BOOL shouldAutomaticallyReportMetrics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRequest:(id)a0;
- (void)viewDidLoad;
- (void)loadView;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)enqueueImpressionMetrics;
- (id)messageView;
- (void)_preloadImageIfNeeded;
- (void)_setDialogRequest:(id)a0;
- (void)_commitAppearance;
- (void)_updateTextWithAttributes;
- (void)_didTapActionButton:(id)a0;
- (void)_setImageWithURL:(id)a0;
- (id)_titleLabelAttributes;
- (id)_messageLabelAttributes;

@end
