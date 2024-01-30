@class UIActivityIndicatorView, NSString, PKContinuousButton, PKPeerPayment3DTextView, NSTimer, CAShapeLayer, UIImageView, NSDecimalNumber, UILabel;
@protocol CKTranscriptPluginViewDelegate;

@interface PKPeerPaymentBubbleView : UIView <CKTranscriptPluginView> {
    PKPeerPayment3DTextView *_renderView;
    BOOL _renderViewRemovedByLossOfWindow;
    BOOL _snapshotInProgress;
    BOOL _usedForSnapshotting;
    UILabel *_messageLabel;
    UILabel *_statusLabel;
    UIActivityIndicatorView *_actionSpinner;
    CAShapeLayer *_maskLayer;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _lastBoundsForRoundedCornerLayout;
    UIImageView *_applePayLogoImageView;
    NSTimer *_testTimer;
}

@property (weak, nonatomic) id<CKTranscriptPluginViewDelegate> pluginViewDelegate;
@property (readonly, nonatomic) BOOL wantsOutline;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long state;
@property (copy, nonatomic) NSDecimalNumber *amount;
@property (copy, nonatomic) NSString *currency;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInset;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } referenceSize;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } referenceBounds;
@property (nonatomic) BOOL testTransition;
@property (nonatomic) unsigned long long action;
@property (copy, nonatomic) id /* block */ actionHandler;
@property (nonatomic) BOOL showsActionSpinner;
@property (readonly, nonatomic) PKContinuousButton *actionButton;
@property (nonatomic) BOOL hasRoundedCorners;
@property (nonatomic) BOOL usesWatchColors;
@property (nonatomic) BOOL displaysApplePayLogo;
@property (nonatomic, getter=isLiveRenderingEnabled) BOOL liveRenderingEnabled;

+ (struct CGSize { double x0; double x1; })referenceSize;
+ (struct CGSize { double x0; double x1; })referenceSizeForState:(unsigned long long)a0;
+ (struct CGSize { double x0; double x1; })referenceSizeForState:(unsigned long long)a0 andAction:(unsigned long long)a1;
+ (id)referenceBackgroundColorForState:(unsigned long long)a0;
+ (id)applePayLogo;
+ (id)referenceWatchBackgroundColorForState:(unsigned long long)a0;
+ (struct CGSize { double x0; double x1; })referenceSizeForPeerPaymentStatusResponse:(id)a0;
+ (id)referenceBackgroundColor;
+ (id)generatedSnapshotForDataURL:(id)a0 contentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 isFromMe:(BOOL)a2;

- (void)_updateContent;
- (void)setState:(unsigned long long)a0 animated:(BOOL)a1;
- (void)_commonInit;
- (id)init;
- (void)_actionButtonTapped:(id)a0;
- (id)initWithAmount:(id)a0 currency:(id)a1 state:(unsigned long long)a2;
- (void)setAction:(unsigned long long)a0 animated:(BOOL)a1;
- (id)_messageTextAttributes;
- (double)_messageAlpha;
- (id)generatedSnapshot;
- (void).cxx_destruct;
- (void)updateWithPeerPaymentStatus:(long long)a0 animated:(BOOL)a1;
- (id)initForSnapshotting;
- (void)performPostRender:(id /* block */)a0;
- (void)updateWithPeerPaymentStatusResponse:(id)a0 animated:(BOOL)a1;
- (void)updateWithPaymentTransaction:(id)a0 animated:(BOOL)a1;
- (void)updateWithPeerPaymentMessage:(id)a0 animated:(BOOL)a1;
- (void)awakeFromNib;
- (id)_statusText;
- (id)initWithCoder:(id)a0;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (id)initWithCurrencyAmount:(id)a0 state:(unsigned long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)interactiveViews;
- (id)_messageText;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)_backgroundColor;
- (id)_actionTitle;

@end
