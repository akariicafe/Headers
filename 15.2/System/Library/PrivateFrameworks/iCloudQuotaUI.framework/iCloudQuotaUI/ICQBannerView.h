@class UIFont, ICQUpgradeFlowManager, NSArray, _ICQTextView, NSString, ICQOffer, ICQUpgradeFlowOptions, UIColor;
@protocol ICQBannerViewDelegate;

@interface ICQBannerView : UIView <UITextViewDelegate, ICQUpgradeFlowManagerDelegate> {
    ICQOffer *_offer;
}

@property (readonly, nonatomic) _ICQTextView *textView;
@property (retain, nonatomic) NSArray *activeConstraints;
@property (retain, nonatomic) ICQUpgradeFlowManager *localFlowManager;
@property (retain, nonatomic) ICQOffer *offer;
@property (weak, nonatomic) id<ICQBannerViewDelegate> delegate;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIFont *detailMessageFont;
@property (retain, nonatomic) UIFont *linkMessageFont;
@property (retain, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) UIColor *detailMessageColor;
@property (retain, nonatomic) UIColor *linkMessageColor;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } textMargins;
@property (nonatomic) long long textAlignment;
@property (nonatomic) double textLineSpacing;
@property (copy, nonatomic) UIFont *linkTextFont;
@property (copy, nonatomic) UIColor *linkTextColor;
@property (copy, nonatomic) ICQUpgradeFlowOptions *flowOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)replaceWordsIn:(id)a0 with:(id)a1;
+ (BOOL)shouldShowForOffer:(id)a0;

- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)messageAttributes;
- (id)textParagraphStyle;
- (void)_applyTextStorageAttributes;
- (long long)semanticContentAttribute;
- (void)upgradeFlowManagerDidCancel:(id)a0;
- (id)_getOffer;
- (void)_applyTextParagraphAttributes;
- (BOOL)_legacyDelegateMethodHandlesAction:(long long)a0;
- (void)upgradeFlowManagerDidComplete:(id)a0;
- (id)linkAttributes;
- (BOOL)_performLink:(id)a0;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateBannerView;
- (id)titleAttributes;
- (id)textParagraphStyleAttributes;
- (id)initWithOffer:(id)a0;
- (long long)_delegateActionForAction:(long long)a0;
- (id)detailMessageAttributes;
- (id)detailAttributedText;
- (void)_registerForDarwinNotifications;
- (id)attributedText;
- (void)_handlePushReceivedDarwinNotification;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (long long)userInterfaceLayoutDirection;
- (BOOL)_launchFlowManagerWithLink:(id)a0;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)textViewDidChangeSelection:(id)a0;
- (void)_updateBannerViewConstraints;

@end
