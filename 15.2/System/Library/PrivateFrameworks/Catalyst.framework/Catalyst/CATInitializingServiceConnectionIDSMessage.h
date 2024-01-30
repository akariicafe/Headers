@class NSUUID, NSDictionary;
@protocol CATInitializingIDSServiceConnectionMessageContent;

@interface CATInitializingServiceConnectionIDSMessage : NSObject <CATIDSMessage>

@property (readonly, nonatomic) NSUUID *invitationIdentifier;
@property (readonly, nonatomic) id<CATInitializingIDSServiceConnectionMessageContent> content;
@property (readonly, nonatomic) long long messageType;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;

+ (id)instanceWithDictionary:(id)a0;

- (void).cxx_destruct;
- (id)initWithInvitationIdentifier:(id)a0 content:(id)a1;

@end
