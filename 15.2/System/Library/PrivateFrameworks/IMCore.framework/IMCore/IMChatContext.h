@class NSUUID;

@interface IMChatContext : NSObject <NSCopying, NSMutableCopying>

@property (readonly, nonatomic) long long serviceType;
@property (readonly, nonatomic) long long filterCategory;
@property (readonly, nonatomic, getter=isSpam) BOOL spam;
@property (readonly, nonatomic, getter=areSendersUnknown) BOOL sendersUnknown;
@property (readonly, nonatomic, getter=hasResponded) BOOL responded;
@property (readonly, nonatomic) NSUUID *activeTelephonyConversationUUID;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_copyWithClass:(Class)a0 zone:(struct _NSZone { } *)a1;

@end
