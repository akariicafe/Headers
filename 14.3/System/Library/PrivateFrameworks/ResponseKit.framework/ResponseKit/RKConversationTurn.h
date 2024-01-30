@class NSString, NSDate;

@interface RKConversationTurn : NSObject

@property (readonly) NSString *text;
@property (readonly) NSString *senderId;
@property (readonly) NSDate *timestamp;

- (void).cxx_destruct;
- (id)initWithString:(id)a0 senderID:(id)a1 timestamp:(id)a2;

@end
