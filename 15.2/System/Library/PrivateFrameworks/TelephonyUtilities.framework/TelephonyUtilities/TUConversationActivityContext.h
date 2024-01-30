@class NSString;

@interface TUConversationActivityContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *actionDescription;
@property (copy, nonatomic) NSString *ongoingDescription;
@property (copy, nonatomic) NSString *completedDescription;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqualToActivityContext:(id)a0;
- (id)initWithContextIdentifier:(id)a0 actionDescription:(id)a1 ongoingDescription:(id)a2 completedDescription:(id)a3;

@end
