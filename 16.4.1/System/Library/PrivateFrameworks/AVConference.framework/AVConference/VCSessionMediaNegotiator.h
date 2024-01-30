@class NSString, NSArray, VCMediaNegotiatorResults, VCMediaNegotiatorResultsAudio, VCMediaNegotiatorResultsVideo, VCMediaNegotiatorResultsMoments, NSMutableDictionary, VCMediaNegotiatorLocalConfiguration, VCMediaNegotiatorResultsFaceTimeSettings;
@protocol VCMediaNegotiatorProtocol;

@interface VCSessionMediaNegotiator : NSObject <VCMediaNegotiatorProtocol> {
    id<VCMediaNegotiatorProtocol> _activeNegotiator;
    NSMutableDictionary *_mediaNegotiatorMap;
}

@property (readonly, nonatomic) VCMediaNegotiatorLocalConfiguration *localSettings;
@property (readonly, nonatomic) VCMediaNegotiatorResults *negotiatedSettings;
@property (readonly, nonatomic) VCMediaNegotiatorResultsAudio *negotiatedAudioSettings;
@property (readonly, nonatomic) VCMediaNegotiatorResultsVideo *negotiatedVideoSettings;
@property (readonly, nonatomic) VCMediaNegotiatorResultsVideo *negotiatedScreenSettings;
@property (readonly, nonatomic) VCMediaNegotiatorResultsMoments *negotiatedMomentsSettings;
@property (readonly, nonatomic) VCMediaNegotiatorResultsFaceTimeSettings *negotiatedFaceTimeSettings;
@property (readonly, nonatomic) NSArray *negotiatedStreamGroups;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)initializeLocalConfiguration:(id)a0 negotiationData:(id)a1 deviceRole:(int)a2 preferredAudioPayload:(int)a3;
+ (id)mediaBlobForVersion:(int)a0 negotiationData:(id)a1;
+ (id)negotiationDataWithVersion1:(id)a0 version2:(id)a1;
+ (id)negotiationDataWithVersion:(int)a0 mediaBlob:(id)a1;
+ (id)serializeNegotiationData:(id)a0;
+ (id)streamGroupIDsWithMediaBlob:(id)a0;
+ (id)unserializeNegotiationData:(id)a0;

- (void)dealloc;
- (id)negotiationData;
- (id)initWithLocalConfiguration:(id)a0;
- (id)negotiatedResultsForGroupID:(unsigned int)a0;
- (BOOL)processRemoteNegotiationData:(id)a0;
- (unsigned int)remoteMaxBandwidthForOperatingMode:(int)a0 connectionType:(int)a1;

@end
