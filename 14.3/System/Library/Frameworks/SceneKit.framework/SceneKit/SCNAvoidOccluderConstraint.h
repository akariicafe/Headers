@class SCNNode;
@protocol SCNAvoidOccluderConstraintDelegate;

@interface SCNAvoidOccluderConstraint : SCNConstraint {
    SCNNode *_target;
    unsigned long long _categoryBitMask;
    float _offset;
    id _delegate;
}

@property (nonatomic) id<SCNAvoidOccluderConstraintDelegate> delegate;
@property (retain, nonatomic) SCNNode *target;
@property (nonatomic) unsigned long long occluderCategoryBitMask;
@property (nonatomic) double bias;

+ (BOOL)supportsSecureCoding;
+ (id)avoidOccluderConstraint;
+ (id)avoidOccluderConstraintWithTarget:(id)a0;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)_customEncodingOfSCNAvoidOccluderConstraint:(id)a0;
- (void)_customDecodingOfSCNAvoidOccluderConstraint:(id)a0;

@end
