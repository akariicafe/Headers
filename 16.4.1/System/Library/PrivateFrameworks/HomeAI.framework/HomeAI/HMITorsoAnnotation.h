@class NSArray, NSUUID, HMIFaceRecognition;

@interface HMITorsoAnnotation : HMFObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) HMIFaceRecognition *faceRecognition;
@property (readonly) NSArray *torsoprints;
@property (readonly) NSUUID *torsoModelVersion;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithFaceRecognition:(id)a0 torsoprints:(id)a1;
- (id)initWithFaceRecognition:(id)a0 torsoprints:(id)a1 torsoModelVersion:(id)a2;

@end
