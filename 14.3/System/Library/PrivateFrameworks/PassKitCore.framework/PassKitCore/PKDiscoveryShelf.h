@interface PKDiscoveryShelf : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long type;

+ (id)shelfWithDictionary:(id)a0;

- (void)localizeWithBundle:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (void)localizeWithBundle:(id)a0 table:(id)a1;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
