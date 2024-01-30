@class NSNumber, INPerson;

@interface INScoredPerson : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) INPerson *person;
@property (readonly, copy, nonatomic) NSNumber *score;
@property (readonly, nonatomic) long long recommendation;

- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)_dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPerson:(id)a0 score:(id)a1;
- (id)initWithPerson:(id)a0 recommendation:(long long)a1;
- (id)initWithPerson:(id)a0 score:(id)a1 recommendation:(long long)a2;
- (unsigned long long)hash;

@end
