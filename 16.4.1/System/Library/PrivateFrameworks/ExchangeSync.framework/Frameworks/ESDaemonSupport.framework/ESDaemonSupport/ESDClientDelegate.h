@class NSString, ESDClient;

@interface ESDClientDelegate : DADisableableObject

@property (weak, nonatomic) ESDClient *client;
@property (retain, nonatomic) NSString *accountID;
@property (nonatomic) BOOL finished;
@property (nonatomic) BOOL consumerCancelled;
@property (retain, nonatomic) NSString *delegateID;

- (void)finishWithError:(id)a0;
- (void)disable;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithAccountID:(id)a0 client:(id)a1;
- (void)userRequestsCancel;

@end
