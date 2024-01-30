@class NSMorphology;

@interface NSInflectionRuleExplicit : NSInflectionRule

@property (readonly, copy) NSMorphology *morphology;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithMorphology:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;

@end
