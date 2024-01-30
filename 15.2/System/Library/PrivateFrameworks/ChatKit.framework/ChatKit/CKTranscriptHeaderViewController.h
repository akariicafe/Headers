@class CKConversation;

@interface CKTranscriptHeaderViewController : UIViewController

@property (retain, nonatomic) CKConversation *conversation;
@property (readonly, nonatomic) BOOL shouldInvalidateOnAddressBookChange;

- (void).cxx_destruct;
- (id)initWithConversation:(id)a0;

@end
