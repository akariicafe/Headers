@class UIButton;

@interface CKTranscriptGroupHeaderViewController : CKTranscriptHeaderViewController

@property (readonly, nonatomic) UIButton *headerButton;

- (void)dealloc;
- (BOOL)shouldInvalidateOnAddressBookChange;
- (void)loadView;
- (void)_handleConversationRecipientsChanged:(id)a0;
- (id)_groupHeaderComposeRecipients;

@end
