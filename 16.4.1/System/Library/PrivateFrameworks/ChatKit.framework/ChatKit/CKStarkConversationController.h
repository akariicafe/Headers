@class NSDateFormatter, CPListTemplate, NSString, CPInterfaceController;

@interface CKStarkConversationController : NSObject <CPInterfaceControllerDelegate>

@property (retain, nonatomic) CPInterfaceController *interfaceController;
@property (retain, nonatomic) CPListTemplate *conversationListTemplate;
@property (retain, nonatomic) NSDateFormatter *dateFormatter;
@property (retain, nonatomic) NSDateFormatter *timeFormatter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_filterStewieConversation:(id)a0;
- (void)_resortAndReloadData;
- (void)conversationListDidChange:(id)a0;
- (id)initWithInterfaceController:(id)a0;
- (void)templateWillAppear:(id)a0 animated:(BOOL)a1;

@end
