@class NSUUID, NSSet, NSData, NSDate;

@interface HMDCameraRecordingSessionSignificantEvent : HMFObject <NSCopying, NSMutableCopying>

@property unsigned long long reason;
@property (copy) NSDate *dateOfOccurrence;
@property unsigned long long confidenceLevel;
@property (copy) NSUUID *sessionEntityUUID;
@property (copy) NSSet *faceClassifications;
@property (retain) NSData *heroFrameData;
@property (retain) NSData *faceCropData;
@property double timeOffsetWithinClip;
@property (readonly, copy) NSUUID *UUID;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)attributeDescriptions;
- (unsigned long long)hash;
- (id)initWithUUID:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
