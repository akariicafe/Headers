@class NSArray, NSUUID, HMIFaceRecognition;

@interface HMITorsoAnnotation : HMFObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) HMIFaceRecognition *faceRecognition;
@property (readonly) NSArray *torsoprints;
@property (readonly) NSUUID *torsoModelVersion;

- (id)attributeDescriptions;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithFaceRecognition:(id)a0 torsoprints:(id)a1;
- (id)initWithFaceRecognition:(id)a0 torsoprints:(id)a1 torsoModelVersion:(id)a2;

@end
