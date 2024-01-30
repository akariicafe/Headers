@interface MEMessageActionDestination : NSObject <NSSecureCoding>

@property (class, readonly, nonatomic) MEMessageActionDestination *inbox;
@property (class, readonly, nonatomic) MEMessageActionDestination *trash;
@property (class, readonly, nonatomic) MEMessageActionDestination *archive;
@property (class, readonly, nonatomic) MEMessageActionDestination *junk;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long mailboxType;

+ (id)allowedMailboxTypes;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithDefaultMailboxType:(long long)a0;

@end
