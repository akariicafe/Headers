@class IMService;

@interface CKPendingConversation : CKConversation

@property (weak, nonatomic) IMService *composeSendingService;
@property (nonatomic) BOOL noAvailableServices;
@property (weak, nonatomic) IMService *previousSendingService;

- (id)uniqueIdentifier;
- (void).cxx_destruct;
- (id)sendingService;
- (void)refreshComposeSendingServiceForAddresses:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void)refreshStatusForAddresses:(id)a0 withCompletionBlock:(id /* block */)a1;
- (id)deviceIndependentID;

@end
