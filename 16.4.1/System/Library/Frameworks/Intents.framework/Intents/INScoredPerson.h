@class NSNumber, INPerson;

@interface INScoredPerson : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) INPerson *person;
@property (readonly, copy, nonatomic) NSNumber *score;
@property (readonly, nonatomic) long long recommendation;

- (void)encodeWithCoder:(id)a0;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithPerson:(id)a0 recommendation:(long long)a1;
- (id)initWithPerson:(id)a0 score:(id)a1;
- (id)initWithPerson:(id)a0 score:(id)a1 recommendation:(long long)a2;

@end
