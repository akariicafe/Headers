@class NSNumber;

@interface CTCAConversationState : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long requestReason;
@property (retain, nonatomic) NSNumber *conversationId;
@property (nonatomic) BOOL committed;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;

@end
