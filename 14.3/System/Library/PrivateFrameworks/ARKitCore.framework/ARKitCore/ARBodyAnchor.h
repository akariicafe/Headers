@class NSString, ARBody2D, ARSkeleton3D, ARCoreRESkeletonResult;

@interface ARBodyAnchor : ARAnchor <ARTrackable> {
    BOOL _tracked;
    double _estimatedScaleFactor;
    ARCoreRESkeletonResult *_skeletonData;
    ARBody2D *_referenceBody;
}

@property (readonly, nonatomic) ARBody2D *referenceBody;
@property (readonly, nonatomic) ARSkeleton3D *skeleton;
@property (readonly, nonatomic) double estimatedScaleFactor;
@property (readonly, nonatomic) BOOL isTracked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithAnchor:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithTrackedState:(BOOL)a0;
- (id)initWithIdentifier:(id)a0 transform:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 tracked:(BOOL)a2 skeletonData:(id)a3;
- (BOOL)isEqualToARBodyAnchor:(id)a0;

@end
