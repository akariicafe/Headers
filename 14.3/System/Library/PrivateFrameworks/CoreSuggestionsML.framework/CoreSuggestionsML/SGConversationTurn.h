@class NSString, NSDate;

@interface SGConversationTurn : NSObject <NSSecureCoding, NSCopying, SGConversationTurnProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) NSString *senderID;
@property (readonly, nonatomic) NSDate *timestamp;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToConversationTurn:(id)a0;
- (id)initWithText:(id)a0 senderID:(id)a1 timestamp:(id)a2;

@end
