@class NSString, NSDictionary;

@interface STVersionVectorNode : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long count;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (BOOL)isEqualToNode:(id)a0;
- (long long)compare:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (void)increment;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (void)join:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
