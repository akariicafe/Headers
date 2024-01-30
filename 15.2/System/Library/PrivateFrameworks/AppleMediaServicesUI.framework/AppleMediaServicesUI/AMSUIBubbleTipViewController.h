@class AMSUIBubbleTipInlineAnchorInfo, NSString, AMSUIBubbleTipAppearance, UIImage, AMSBinaryPromise, AMSDialogRequest;
@protocol AMSUIMessageViewControllerDelegate;

@interface AMSUIBubbleTipViewController : UIViewController <AMSUIMessageViewController>

@property (nonatomic) BOOL didEnqueueMetrics;
@property (nonatomic) BOOL isLoadingImage;
@property (retain, nonatomic) UIImage *loadedImage;
@property (retain, nonatomic) AMSDialogRequest *request;
@property (retain, nonatomic) AMSUIBubbleTipAppearance *requestAppearance;
@property struct CGPoint { double x; double y; } anchorPoint;
@property (weak, nonatomic) id<AMSUIMessageViewControllerDelegate> delegate;
@property (retain, nonatomic) AMSUIBubbleTipInlineAnchorInfo *inlineAnchorInfo;
@property (retain, nonatomic) AMSBinaryPromise *loadPromise;
@property (retain, nonatomic) AMSUIBubbleTipAppearance *preferredAppearance;
@property (nonatomic) BOOL shouldAutomaticallyReportMetrics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRequest:(id)a0;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
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
- (void)_startObservations;
- (void)_endObservations;
- (unsigned long long)_messageViewStyle;
- (void)_updateArrowProperties;
- (unsigned long long)directionForAMSUIPopoverArrowDirection:(unsigned long long)a0;

@end
