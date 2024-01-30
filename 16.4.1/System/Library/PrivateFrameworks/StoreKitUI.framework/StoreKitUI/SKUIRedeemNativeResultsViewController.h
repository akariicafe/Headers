@class NSString, UIImage, SKUIItemStateCenter, SKUITextLayout, UIImageView, UIButton, SKUIRedeemResultMessageView, NSOperationQueue, SKUIGiftItemView, SKUIRedeemITunesPassLockup, SKUITextBoxView;

@interface SKUIRedeemNativeResultsViewController : SKUIRedeemResultsViewController <SKUIItemStateCenterObserver, SKUIRedeemResultsViewDelegate>

@property (retain, nonatomic) UIButton *anotherButton;
@property (retain, nonatomic) SKUITextLayout *extendedMessageTextLayout;
@property (retain, nonatomic) SKUITextBoxView *extendedMessageView;
@property (retain, nonatomic) UIImageView *headerImageView;
@property (retain, nonatomic) UIImage *itemImage;
@property (retain, nonatomic) SKUIItemStateCenter *itemStateCenter;
@property (retain, nonatomic) SKUIGiftItemView *itemView;
@property (retain, nonatomic) SKUIRedeemResultMessageView *messageView;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) SKUIRedeemITunesPassLockup *passbookLockup;
@property (nonatomic) unsigned long long currentItemStateFlag;
@property (nonatomic) BOOL extendedMessageIsExpanded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canShowResultsForRedeem:(id)a0;

- (void)_reloadSections;
- (void)dealloc;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (id)_item;
- (id)_emptySection;
- (id)_itemView;
- (double)_tableWidth;
- (id)initWithRedeem:(id)a0;
- (id)_anotherButtonSection;
- (void)_extendedMessageAction:(id)a0;
- (id)_extendedMessageViewSection;
- (id)_headerImageViewSection;
- (id)_itemViewSection;
- (id)_linksSection;
- (id)_messageViewSection;
- (void)_openAction:(id)a0;
- (id)_passbookLearnMoreSection;
- (void)_passbookLockupAction:(id)a0;
- (void)_redeemAnotherAction:(id)a0;
- (void)_reloadResultViewMessage;
- (id)_resultImageViewSection;
- (void)_setHeaderImage:(id)a0;
- (void)_setItemImage:(id)a0;
- (void)itemStateCenter:(id)a0 itemStatesChanged:(id)a1;
- (void)redeemResultsView:(id)a0 didSelectRowAtIndexPath:(id)a1;

@end
