@class NSString, NSOrderedSet;

@interface TIKeyboardCandidateGroup : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *title;
@property (copy) NSOrderedSet *candidates;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)hasAlternativeText;
- (id)initWithTitle:(id)a0 candidates:(id)a1;
- (id)mutableCandidates;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)addCandidate:(id)a0;

@end
