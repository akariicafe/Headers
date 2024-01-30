@class UIButton;

@interface CKTranscriptGroupHeaderViewController : CKTranscriptHeaderViewController

@property (readonly, nonatomic) UIButton *headerButton;

- (void)loadView;
- (void)_handleConversationRecipientsChanged:(id)a0;
- (id)_groupHeaderComposeRecipients;
- (BOOL)shouldInvalidateOnAddressBookChange;
- (void)dealloc;

@end
