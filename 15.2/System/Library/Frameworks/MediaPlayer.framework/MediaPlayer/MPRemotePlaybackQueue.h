@class NSDictionary, NSString, ICUserIdentity;

@interface MPRemotePlaybackQueue : NSObject <NSSecureCoding> {
    struct _MRSystemAppPlaybackQueue { } *_mediaRemotePlaybackQueue;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct _MRSystemAppPlaybackQueue { } *_mediaRemotePlaybackQueue;
@property (readonly, nonatomic) NSDictionary *mediaRemoteOptions;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (nonatomic, getter=isRequestingImmediatePlayback) BOOL requestingImmediatePlayback;
@property (nonatomic) BOOL shouldOverrideManuallyCuratedQueue;
@property (nonatomic) long long replaceIntent;
@property (copy, nonatomic) NSString *siriRecommendationIdentifier;
@property (readonly, copy, nonatomic) NSString *siriAssetInfo;
@property (readonly, copy, nonatomic) NSString *queueGroupingID;
@property (readonly, copy, nonatomic) NSString *featureName;
@property (readonly, copy, nonatomic) NSDictionary *siriWHAMetricsInfo;
@property (readonly, nonatomic) ICUserIdentity *userIdentity;

+ (id)queueWithMediaRemotePlaybackQueue:(struct _MRSystemAppPlaybackQueue { } *)a0;
+ (id)queueWithMediaRemotePlaybackQueue:(struct _MRSystemAppPlaybackQueue { } *)a0 options:(id)a1;
+ (void)registerRemotePlaybackQueueClass:(Class)a0 forPlaybackQueueType:(int)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithMediaRemotePlaybackQueue:(struct _MRSystemAppPlaybackQueue { } *)a0 options:(id)a1;
- (BOOL)verifyWithError:(id *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)dealloc;

@end
