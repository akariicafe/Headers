@class NSDictionary, HKQueryAnchor;

@interface HDConceptIndexManagerState : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long generation;
@property (readonly, copy, nonatomic) HKQueryAnchor *anchor;
@property (readonly, copy, nonatomic) NSDictionary *deletionAnchors;

+ (id)stateWithGeneration:(long long)a0;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithGeneration:(long long)a0 anchor:(id)a1 deletionAnchors:(id)a2;
- (id)copyWithAnchor:(id)a0;
- (id)copyWithDeletionAnchor:(id)a0 forSampleType:(id)a1;

@end
