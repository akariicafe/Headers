@class ECServerMessage, ECAngleBracketIDHash;

@interface EDExistingMessageWithMessageIDHeader : NSObject

@property (readonly, nonatomic) ECAngleBracketIDHash *messageIDHash;
@property (readonly, nonatomic) ECServerMessage *serverMessage;
@property (readonly, nonatomic) long long messagePersistentID;

- (void).cxx_destruct;
- (id)initWithMessageIDHash:(id)a0 serverMessage:(id)a1 messagePersistentID:(long long)a2;

@end
