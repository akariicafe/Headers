@class UIView, NSString, NSArray, PKContinuousButton, PKPaymentPassAction, UIImageView, PKPaymentTransaction, PKTransitBalanceModel, PKStackedTextItemGroupView, PKPeerPaymentContactResolver, PKPaymentPass, PKStackedTextItemGroup;

@interface PKFooterTransactionView : UIView <PKPeerPaymentContactResolverDelegate> {
    PKStackedTextItemGroup *_displayItem;
    PKStackedTextItemGroupView *_headerView;
    PKStackedTextItemGroupView *_contentView;
    UIView *_separatorView;
    PKStackedTextItemGroupView *_footerView;
    UIImageView *_disclosureView;
    PKContinuousButton *_actionButton;
    PKPaymentPassAction *_action;
    UIImageView *_imageView;
    BOOL _animated;
    unsigned long long _deferUpdateCounter;
    BOOL _needsContentUpdate;
}

@property (readonly, nonatomic) PKPaymentPass *pass;
@property (readonly, nonatomic) PKPaymentTransaction *transaction;
@property (copy, nonatomic) PKTransitBalanceModel *transitBalanceModel;
@property (readonly, copy, nonatomic) NSArray *transitCommutePlans;
@property (readonly, nonatomic) PKPeerPaymentContactResolver *peerPaymentContactResolver;
@property (readonly, nonatomic) BOOL hasContent;
@property (nonatomic) BOOL disableCommutePlanDisplay;
@property (nonatomic) BOOL enableDisclosure;
@property (readonly, nonatomic) BOOL contentRequiresDisclosure;
@property (retain, nonatomic) NSString *requiredActionPropertyIdentifier;
@property (copy, nonatomic) id /* block */ actionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_image;
- (void)beginUpdates;
- (void)_actionButtonTapped:(id)a0;
- (void)layoutIfNeededAnimated:(BOOL)a0;
- (void)endUpdates:(BOOL)a0;
- (void).cxx_destruct;
- (void)contactsDidChangeForContactResolver:(id)a0;
- (id)_statusText;
- (void)_updateContentAnimated:(BOOL)a0;
- (id)_merchantText;
- (id)_locationText;
- (id)_relativeDateText;
- (id)_peerPaymentCounterpart;
- (BOOL)_strikethroughAmount;
- (BOOL)_deemphasizeAmount;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 peerPaymentContactResolver:(id)a1;
- (id)_firstRenewActionForPass:(id)a0;
- (void)setPass:(id)a0 animated:(BOOL)a1;
- (void)setTransaction:(id)a0 animated:(BOOL)a1;
- (void)setTransitBalanceModel:(id)a0 animated:(BOOL)a1;
- (void)setTransitCommutePlans:(id)a0 animated:(BOOL)a1;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
