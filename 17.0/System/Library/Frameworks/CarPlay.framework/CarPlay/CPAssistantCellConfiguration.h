@interface CPAssistantCellConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long position;
@property (readonly, nonatomic) long long visibility;
@property (readonly, nonatomic) long long assistantAction;

- (BOOL)isEqualToConfiguration:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPosition:(long long)a0 visibility:(long long)a1 assistantAction:(long long)a2;

@end
