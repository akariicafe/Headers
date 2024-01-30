@class NSDictionary;

@interface GroupMessageContext : NSObject

@property (readonly, nonatomic) NSDictionary *groupPayload;
@property (readonly, nonatomic) NSDictionary *additionalPayload;
@property (readonly, nonatomic, getter=isGroupChat) BOOL groupChat;

- (void).cxx_destruct;
- (id)initWithGroupPayload:(id)a0 additionalPayload:(id)a1 isGroupChat:(BOOL)a2;

@end
