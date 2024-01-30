@class NSUUID, NSString, NSURL, TUConversationActivitySession;

@interface TUConversationNotice : NSObject <TUConversationNoticeProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *sessionUUID;
@property (retain, nonatomic) NSURL *actionURL;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *item;
@property (nonatomic) long long queueItemType;
@property (retain, nonatomic) TUConversationActivitySession *session;
@property (readonly, nonatomic) NSUUID *UUID;
@property (nonatomic) long long sessionEventType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithUUID:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToConversationNotice:(id)a0;

@end
