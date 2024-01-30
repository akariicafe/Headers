@class NSDictionary, NSUUID;

@interface _DECResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long consumer;
@property (retain, nonatomic) NSDictionary *results;
@property (nonatomic) long long reason;
@property (retain, nonatomic) NSDictionary *reasonMetadata;
@property (readonly, nonatomic) NSUUID *identifier;

- (id)resultForCategory:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithConsumer:(unsigned long long)a0;
- (BOOL)isEquivalentToResult:(id)a0 limit:(unsigned long long)a1;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEquivalentToResult:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
