@class NSUUID, HMFaceClassification, NSString, NSDate, NSArray;

@interface HMCameraSignificantEvent : NSObject <HMFObject, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSUUID *uniqueIdentifier;
@property (readonly) unsigned long long reason;
@property (readonly, copy) NSDate *dateOfOccurrence;
@property (readonly) unsigned long long confidenceLevel;
@property (readonly, copy) NSUUID *cameraProfileUUID;
@property (readonly, copy) HMFaceClassification *faceClassification;
@property (readonly) BOOL canAskForUserFeedback;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;

- (void).cxx_destruct;
- (id)initWithUniqueIdentifier:(id)a0 reason:(unsigned long long)a1 dateOfOccurrence:(id)a2 confidenceLevel:(unsigned long long)a3 cameraProfileUUID:(id)a4 faceClassification:(id)a5;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithUniqueIdentifier:(id)a0 reason:(unsigned long long)a1 dateOfOccurrence:(id)a2 confidenceLevel:(unsigned long long)a3 faceClassification:(id)a4;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
