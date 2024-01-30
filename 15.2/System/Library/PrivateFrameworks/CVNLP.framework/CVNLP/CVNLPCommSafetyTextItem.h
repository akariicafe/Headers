@class NSString, NSDate;

@interface CVNLPCommSafetyTextItem : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *conversationIdentifier;
@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, nonatomic) long long direction;
@property (readonly, copy, nonatomic) NSString *text;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithConversationIdentifier:(id)a0 date:(id)a1 direction:(long long)a2 text:(id)a3;

@end
