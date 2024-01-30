@class HKUserDomainConcept, HKQueryAnchor;

@interface HKUserDomainConceptQueryResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long rawAnchor;
@property (readonly, copy, nonatomic) HKUserDomainConcept *concept;
@property (readonly, copy, nonatomic) HKQueryAnchor *anchor;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithConcept:(id)a0 rawAnchor:(long long)a1;

@end
