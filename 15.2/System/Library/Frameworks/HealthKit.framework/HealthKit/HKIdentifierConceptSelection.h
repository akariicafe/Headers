@class HKConceptIdentifier;

@interface HKIdentifierConceptSelection : HKConceptSelection

@property (readonly, copy, nonatomic) HKConceptIdentifier *identifier;

+ (BOOL)supportsSecureCoding;

- (id)initWithIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
