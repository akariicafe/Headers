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
+ (id)applePayLogo;
+ (id)generatedSnapshotForDataURL:(id)a0 contentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 isFromMe:(BOOL)a2;
+ (id)referenceBackgroundColor;
+ (id)referenceBackgroundColorForState:(unsigned long long)a0;
+ (struct CGSize { double x0; double x1; })referenceSizeForPeerPaymentStatusResponse:(id)a0;
+ (struct CGSize { double x0; double x1; })referenceSizeForState:(unsigned long long)a0;
+ (struct CGSize { double x0; double x1; })referenceSizeForState:(unsigned long long)a0 andAction:(unsigned long long)a1;
+ (id)referenceWatchBackgroundColorForState:(unsigned long long)a0;

- (void)setState:(unsigned long long)a0 animated:(BOOL)a1;
- (void)awakeFromNib;
- (void)_commonInit;
- (id)initWithCoder:(id)a0;
- (void)didMoveToWindow;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)_backgroundColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateContent;
- (void)layoutSubviews;
- (id)init;
- (void).cxx_destruct;
- (void)_actionButtonTapped:(id)a0;
- (id)_actionTitle;
- (id)_messageText;
- (id)interactiveViews;
- (double)_messageAlpha;
- (id)_messageTextAttributes;
- (id)_statusText;
- (id)generatedSnapshot;
- (id)initForSnapshotting;
- (id)initWithAmount:(id)a0 currency:(id)a1 state:(unsigned long long)a2;
- (id)initWithCurrencyAmount:(id)a0 state:(unsigned long long)a1;
- (void)performPostRender:(id /* block */)a0;
- (void)setAction:(unsigned long long)a0 animated:(BOOL)a1;
- (void)updateWithPaymentTransaction:(id)a0 animated:(BOOL)a1;
- (void)updateWithPeerPaymentMessage:(id)a0 animated:(BOOL)a1;
- (void)updateWithPeerPaymentStatus:(long long)a0 animated:(BOOL)a1;
- (void)updateWithPeerPaymentStatusResponse:(id)a0 animated:(BOOL)a1;

@end
