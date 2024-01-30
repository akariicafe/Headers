@class NSString, NSArray, IMSyndicationAction, IMDChat;

@interface IMSyndicationActionPipelineParameter : NSObject <IMSyndicationActionProcessingParameter, IMFindChatProcessingParameter>

@property (copy, nonatomic) NSString *fromIdentifier;
@property (copy, nonatomic) NSString *toIdentifier;
@property (copy, nonatomic) NSString *fromDisplayID;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *currentGroupName;
@property (nonatomic) BOOL isFromMe;
@property (copy, nonatomic) NSArray *participantIdentifiers;
@property (readonly, nonatomic) unsigned long long encodedSyndicationStartDate;
@property (readonly, nonatomic) unsigned char itemType;
@property (readonly, nonatomic) NSString *messagePartGUID;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } syndicatedMessagePartRange;
@property (readonly, nonatomic) unsigned char version;
@property (readonly, nonatomic) unsigned char actionType;
@property (readonly, nonatomic) IMSyndicationAction *syndicationAction;
@property (readonly, nonatomic) IMDChat *chat;

- (id)description;
- (void).cxx_destruct;
- (void)setChat:(id)a0;
- (id)createSyndicationActionWithChat:(id)a0;
- (id)initWithDefusedSyndicationAction:(id)a0 idsTrustedData:(id)a1 pipelineResources:(id)a2;
- (void)setSyndicationAction:(id)a0;

@end
