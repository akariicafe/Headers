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

- (id)initWithUUID:(id)a0;
- (id)attributeDescriptions;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
