@class HKUserDomainConcept;

@interface _HKUserDomainConceptQueryResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) HKUserDomainConcept *concept;
@property (nonatomic) long long anchor;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithConcept:(id)a0 anchor:(long long)a1;

@end
