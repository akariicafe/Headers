@interface SKHandleInvitability : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL isInvitable;
@property (readonly, nonatomic) BOOL wasRemoved;

+ (id)logger;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithIsInvitable:(BOOL)a0 wasRemoved:(BOOL)a1;

@end
