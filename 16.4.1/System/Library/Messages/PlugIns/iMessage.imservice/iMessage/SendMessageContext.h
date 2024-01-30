@class NSDate, NSString, NSArray, IDSService, NSNumber, IMDChat, MessageDeliveryContext, GroupMessageContext, IMDAccount, MessageServiceSession, IDSAccount;

@interface SendMessageContext : NSObject

@property (readonly, nonatomic) MessageServiceSession *serviceSession;
@property (readonly, nonatomic) IMDChat *chat;
@property (readonly, nonatomic) IMDAccount *imdAccount;
@property (readonly, nonatomic) IDSAccount *idsAccount;
@property (readonly, nonatomic) NSString *fromURI;
@property (readonly, nonatomic) IDSService *idsService;
@property (readonly, nonatomic) NSArray *participantURIs;
@property (readonly, nonatomic) NSArray *originalParticipantURIs;
@property (retain, nonatomic) GroupMessageContext *groupMessageContext;
@property (retain, nonatomic) MessageDeliveryContext *messageDeliveryContext;
@property (retain, nonatomic) NSDate *sendDate;
@property (retain, nonatomic) NSNumber *sendDuration;

- (void).cxx_destruct;
- (id)initWithChat:(id)a0 withIMDAccount:(id)a1 withIDSAccount:(id)a2 withCallerURI:(id)a3 serviceSession:(id)a4 withIDSService:(id)a5 withParticipantURIs:(id)a6 withOriginalParticipantURIs:(id)a7;

@end
