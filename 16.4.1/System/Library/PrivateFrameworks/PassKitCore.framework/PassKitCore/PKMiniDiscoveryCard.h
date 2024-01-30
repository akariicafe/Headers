@interface PKMiniDiscoveryCard : PKDiscoveryCard

@property (readonly, nonatomic) long long miniCardTemplateType;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)description;

@end
