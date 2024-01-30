@class NSString, NSDictionary, ICUserIdentity;

@interface MPCAssistantPlaybackQueue : NSObject

@property (readonly, copy, nonatomic) NSString *contextID;
@property (readonly, nonatomic) BOOL supportedOnCurrentPlatform;
@property (nonatomic) BOOL shouldOverrideManuallyCuratedQueue;
@property (nonatomic) BOOL shouldImmediatelyStartPlayback;
@property (copy, nonatomic) NSString *siriRecommendationID;
@property (copy, nonatomic) NSString *siriAssetInfo;
@property (copy, nonatomic) NSString *featureName;
@property (copy, nonatomic) NSDictionary *siriWHAMetricsInfo;
@property (copy, nonatomic) ICUserIdentity *userIdentity;
@property (copy, nonatomic) NSString *homeKitUserIdentifier;

- (void).cxx_destruct;
- (id)initWithContextID:(id)a0;
- (struct _MRSystemAppPlaybackQueue { } *)createRemotePlaybackQueue;

@end
