@class NSUUID, NSString, NSDictionary, DMFControlSessionIdentifier;

@interface CRKASMClassSessionInvitation : NSObject <CRKDictionaryCodable>

@property (readonly, nonatomic) NSUUID *invitationIdentifier;
@property (readonly, copy, nonatomic) NSString *instructorIdentifier;
@property (readonly, nonatomic) DMFControlSessionIdentifier *sessionIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;

+ (id)instanceWithDictionary:(id)a0;

- (void).cxx_destruct;
- (id)initWithInvitationIdentifier:(id)a0 instructorIdentifier:(id)a1 sessionIdentifier:(id)a2;
- (id)initWithSessionIdentifier:(id)a0 instructorIdentifier:(id)a1;

@end
