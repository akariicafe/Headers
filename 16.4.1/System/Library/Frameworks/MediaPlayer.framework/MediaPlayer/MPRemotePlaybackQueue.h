@class NSString, NSDictionary, NSNumber, ICUserIdentity;

@interface MPRemotePlaybackQueue : NSObject <NSSecureCoding> {
    struct _MRSystemAppPlaybackQueue { } *_mediaRemotePlaybackQueue;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct _MRSystemAppPlaybackQueue { } *_mediaRemotePlaybackQueue;
@property (readonly, nonatomic) NSDictionary *mediaRemoteOptions;
@property (copy, nonatomic) NSString *siriRecommendationIdentifier;
@property (nonatomic, getter=isRequestingImmediatePlayback) BOOL requestingImmediatePlayback;
@property (nonatomic) long long replaceIntent;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (readonly, nonatomic) ICUserIdentity *userIdentity;
@property (readonly, nonatomic) NSNumber *privateListeningOverride;
@property (readonly, copy, nonatomic) NSString *siriReferenceIdentifier;
@property (readonly, copy, nonatomic) NSString *siriAssetInfo;
@property (readonly, copy, nonatomic) NSString *queueGroupingID;
@property (readonly, copy, nonatomic) NSString *featureName;
@property (readonly, copy, nonatomic) NSDictionary *siriWHAMetricsInfo;

+ (id)queueWithMediaRemotePlaybackQueue:(struct _MRSystemAppPlaybackQueue { } *)a0;
+ (id)queueWithMediaRemotePlaybackQueue:(struct _MRSystemAppPlaybackQueue { } *)a0 options:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)verifyWithError:(id *)a0;
- (void)dealloc;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithMediaRemotePlaybackQueue:(struct _MRSystemAppPlaybackQueue { } *)a0 options:(id)a1;

@end
