@class NSSet, NSString;

@interface ARWorldTrackingReferenceAnchorData : NSObject <ARResultData, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double timestamp;
@property (readonly, nonatomic) NSSet *updatedAnchors;
@property (readonly, nonatomic) NSSet *addedAnchors;
@property (readonly, nonatomic) NSSet *removedAnchors;
@property (retain, nonatomic) NSSet *receivedAnchors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)anchorsForCameraWithTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 referenceOriginTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 existingAnchors:(id)a2 anchorsToRemove:(id)a3;
- (id)initWithUpdatedAnchors:(id)a0 addedAnchors:(id)a1 removedAnchors:(id)a2;

@end
