@class NSString;

@interface PKImageDescriptorSymbol : PKImageDescriptor

@property (readonly, nonatomic) NSString *name;

+ (BOOL)supportsSecureCoding;
+ (id)createForName:(id)a0 withTintColor:(long long)a1;
+ (id)createForName:(id)a0 withTintColor:(long long)a1 hasBackground:(BOOL)a2;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
