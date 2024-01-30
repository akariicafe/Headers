@class NSUUID;

@interface HMCameraClipSignificantEvent : HMCameraSignificantEvent

@property (readonly) double timeOffsetWithinClip;
@property (readonly, copy) NSUUID *clipUUID;

+ (BOOL)supportsSecureCoding;

- (id)attributeDescriptions;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithUniqueIdentifier:(id)a0 reason:(unsigned long long)a1 dateOfOccurrence:(id)a2 confidenceLevel:(unsigned long long)a3 cameraProfileUUID:(id)a4 faceClassification:(id)a5 timeOffsetWithinClip:(double)a6 clipUUID:(id)a7;
- (id)initWithUniqueIdentifier:(id)a0 reason:(unsigned long long)a1 dateOfOccurrence:(id)a2 confidenceLevel:(unsigned long long)a3 faceClassification:(id)a4 timeOffsetWithinClip:(double)a5 clipUUID:(id)a6;

@end
