@class UIButton;

@interface CKTranscriptGroupHeaderViewController : CKTranscriptHeaderViewController

@property (readonly, nonatomic) UIButton *headerButton;

- (void)dealloc;
- (void)loadView;
- (id)_groupHeaderComposeRecipients;
- (void)_handleConversationRecipientsChanged:(id)a0;
- (BOOL)shouldInvalidateOnAddressBookChange;

@end
