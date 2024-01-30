@interface SCDAFBoost : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long type;
@property (nonatomic) long long kind;
@property (nonatomic) double boostValue;
@property (nonatomic) double currentDecay;
@property (nonatomic) double totalDecay;

+ (id)arrayDictionaryRepresentation:(id)a0;
+ (id)boostsArrayWithDictionaryRepresentation:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)a0;

@end
