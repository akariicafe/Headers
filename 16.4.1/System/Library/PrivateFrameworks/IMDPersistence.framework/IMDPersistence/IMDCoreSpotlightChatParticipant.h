@class NSString, CNContact;

@interface IMDCoreSpotlightChatParticipant : NSObject

@property (readonly, copy, nonatomic) NSString *handleID;
@property (readonly, nonatomic) CNContact *contact;
@property (readonly, nonatomic) BOOL isSender;

- (void).cxx_destruct;
- (id)initWithHandleID:(id)a0 contact:(id)a1 isSender:(BOOL)a2;

@end
