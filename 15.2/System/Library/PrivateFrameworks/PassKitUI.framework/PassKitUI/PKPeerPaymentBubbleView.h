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

- (void)layoutSubviews;
- (void)_updateContent;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)setState:(unsigned long long)a0 animated:(BOOL)a1;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)interactiveViews;
- (void)_commonInit;
- (void)didMoveToWindow;
- (id)_backgroundColor;
- (void)_actionButtonTapped:(id)a0;
- (id)_actionTitle;
- (id)_messageText;
- (id)_statusText;
- (id)initWithCurrencyAmount:(id)a0 state:(unsigned long long)a1;
- (id)initWithAmount:(id)a0 currency:(id)a1 state:(unsigned long long)a2;
- (void)setAction:(unsigned long long)a0 animated:(BOOL)a1;
- (id)_messageTextAttributes;
- (double)_messageAlpha;
- (void)updateWithPeerPaymentStatus:(long long)a0 animated:(BOOL)a1;
- (id)generatedSnapshot;
- (id)initForSnapshotting;
- (void)performPostRender:(id /* block */)a0;
- (void)updateWithPeerPaymentStatusResponse:(id)a0 animated:(BOOL)a1;
- (void)updateWithPaymentTransaction:(id)a0 animated:(BOOL)a1;
- (void)updateWithPeerPaymentMessage:(id)a0 animated:(BOOL)a1;

@end
