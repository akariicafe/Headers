@class NSString, AMSDialogRequest, UIImage, AMSUIMessageView, NSDictionary, AMSBinaryPromise, ACAccount, UIImageSymbolConfiguration;
@protocol AMSBagProtocol, AMSUIMessageViewControllerDelegate;

@interface AMSUIBaseMessageViewController : UIViewController <AMSUIMessageViewDelegate, AMSUIMessageViewController>

@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) id<AMSBagProtocol> bag;
@property (nonatomic) BOOL didEnqueueMetrics;
@property (readonly, nonatomic) UIImageSymbolConfiguration *_effectiveImageSymbolConfiguration;
@property (nonatomic) BOOL _isLoadingImage;
@property (retain, nonatomic) UIImage *_loadedImage;
@property (readonly, nonatomic) unsigned long long _messageStyle;
@property (readonly, nonatomic) AMSUIMessageView *_messageView;
@property (readonly, nonatomic) NSDictionary *_messageLabelAttributes;
@property (readonly, nonatomic) NSDictionary *_titleLabelAttributes;
@property (readonly, nonatomic) long long _primaryImageRenderingMode;
@property (weak, nonatomic) id<AMSUIMessageViewControllerDelegate> delegate;
@property (readonly, nonatomic) AMSDialogRequest *dialogRequest;
@property (nonatomic) unsigned long long impressionsReportingFrequency;
@property (retain, nonatomic) AMSBinaryPromise *loadPromise;
@property (nonatomic) BOOL shouldAutomaticallyReportMetrics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willTransitionToTraitCollection:(id)a0 withTransitionCoordinator:(id)a1;
- (id)initWithRequest:(id)a0;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithRequest:(id)a0 bag:(id)a1 account:(id)a2;
- (void)loadView;
- (void)enqueueImpressionMetrics;
- (void)_commitAppearance;
- (void)_didTapActionButton:(id)a0;
- (id)_messageLabelAttributesCompatibleWith:(id)a0;
- (void)_notifyMetricsFields:(id)a0;
- (void)_preloadImageIfNeeded;
- (void)_setDialogRequest:(id)a0;
- (void)_setImageWithURL:(id)a0;
- (id)_titleLabelAttributesCompatibleWith:(id)a0;
- (void)_updateTextWithAttributes;
- (void)_updateTextWithAttributes:(id)a0;
- (void)ams_messageViewDidUpdateOverrideTraitCollection:(id)a0;
- (void)enqueueImpressionEngagementMetrics;

@end
