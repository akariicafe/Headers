@class NSString, CKChatController;

@interface CKTranscriptSharingFooterViewController : UIViewController <UITextViewDelegate>

@property (readonly, nonatomic) CKChatController *chatController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)loadView;
- (id)initWithChatController:(id)a0;

@end
