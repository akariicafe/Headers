@class SKUIGiftTextTableViewCell, NSString, UITextView, SKUIGiftRecipientTableViewCell, SKUIGift;
@protocol UITextFieldDelegate;

@interface SKUIGiftAddressingSection : SKUIGiftTableViewSection {
    double _footerHeight;
    NSString *_footerString;
    UITextView *_messagingTextView;
    SKUIGiftRecipientTableViewCell *_recipientTableViewCell;
    double _textViewCellHeight;
}

@property (retain, nonatomic) SKUIGiftTextTableViewCell *messageCell;
@property (retain, nonatomic) SKUIGift *gift;
@property (nonatomic) id<UITextFieldDelegate> textFieldDelegate;

- (void).cxx_destruct;
- (long long)numberOfRowsInSection;
- (double)heightForCellInTableView:(id)a0 indexPath:(id)a1;
- (id)tableViewCellForTableView:(id)a0 indexPath:(id)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forIndexPath:(id)a2;
- (void)beginEditingMessageForTableView:(id)a0 indexPath:(id)a1;
- (void)endEditingMessageForTableView:(id)a0 indexPath:(id)a1;
- (id)initWithGiftConfiguration:(id)a0;
- (id)_recipientTableViewCell;
- (id)_footerString;
- (id)_textFieldTableViewCellForTableView:(id)a0 indexPath:(id)a1;
- (id)_attributedPlaceholderWithString:(id)a0;

@end
