@interface CADObjectChangeID : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int entityType;
@property (readonly, nonatomic) long long changeID;

- (id)initWithCoder:(id)a0;
- (id)initWithEntityType:(int)a0 changeID:(long long)a1;
- (void)encodeWithCoder:(id)a0;

@end
