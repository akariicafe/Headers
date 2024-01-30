@class NSString;

@interface HDSyncEntityIdentifier : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long entityIdentifier;
@property (readonly, copy, nonatomic) NSString *schemaIdentifier;

+ (id)identifierWithSchema:(id)a0 entity:(long long)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)codableEntityIdentifier;
- (id)initWithCodableEntityIdentifier:(id)a0;
- (id)initWithEntityIdentifier:(long long)a0 schemaIdentifier:(id)a1;

@end
