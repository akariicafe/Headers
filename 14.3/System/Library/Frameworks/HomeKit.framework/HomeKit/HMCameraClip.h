@class NSUUID, NSString, NSArray, NSDate, NSSet, NSData, NSDictionary, HMCameraClipEncryptionContext;

@interface HMCameraClip : NSObject <NSCopying, NSSecureCoding, HMCameraRecordingEvent>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *streamingAssetVersion;
@property (readonly, copy) HMCameraClipEncryptionContext *encryptionContext;
@property (readonly, copy) NSArray *videoSegments;
@property (readonly, copy) NSUUID *uniqueIdentifier;
@property (readonly, copy) NSDate *startDate;
@property (readonly) double duration;
@property (readonly, getter=isComplete) BOOL complete;
@property (readonly, getter=isDonated) BOOL donated;
@property (readonly) double targetFragmentDuration;
@property (readonly, copy) NSData *encryptionKey;
@property (readonly, copy) NSArray *posterFrames;
@property (readonly, copy) NSArray *videoDataSegments;
@property (readonly, copy) NSSet *significantEvents;
@property (readonly, copy) NSDictionary *videoAssetRequiredHTTPHeaders;
@property (readonly) BOOL canAskForUserFeedback;
@property (readonly, copy) NSDate *dateOfOccurrence;

+ (id)requiredHTTPHeadersForStreamingAssetVersion:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithUniqueIdentifier:(id)a0 startDate:(id)a1 duration:(double)a2 targetFragmentDuration:(double)a3 isComplete:(BOOL)a4 isDonated:(BOOL)a5 streamingAssetVersion:(id)a6 encryptionContext:(id)a7 posterFrames:(id)a8 videoSegments:(id)a9 significantEvents:(id)a10;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
