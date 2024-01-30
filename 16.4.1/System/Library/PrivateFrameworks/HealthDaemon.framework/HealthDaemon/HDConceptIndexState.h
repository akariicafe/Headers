@class HKQueryAnchor;

@interface HDConceptIndexState : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long generation;
@property (readonly, copy, nonatomic) HKQueryAnchor *anchor;

+ (id)stateWithGeneration:(long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithAnchor:(id)a0;
- (id)initWithGeneration:(long long)a0 anchor:(id)a1;

@end
