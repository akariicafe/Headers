@class NSString, NSOrderedSet;

@interface TIKeyboardCandidateGroup : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *title;
@property (copy) NSOrderedSet *candidates;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTitle:(id)a0 candidates:(id)a1;
- (id)mutableCandidates;
- (void)addCandidate:(id)a0;
- (BOOL)hasAlternativeText;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
