@class NSString, VCMediaNegotiatorResults, VCMediaNegotiatorResultsAudio, VCMediaNegotiatorResultsMoments, VCMediaNegotiatorResultsVideo, NSMutableArray, VCMediaNegotiatorLocalConfiguration, VCMediaNegotiatorResultsFaceTimeSettings;

@interface VCMediaNegotiatorBase : NSObject <VCMediaNegotiatorProtocol>

@property (readonly, nonatomic) VCMediaNegotiatorLocalConfiguration *localSettings;
@property (readonly, nonatomic) VCMediaNegotiatorResults *negotiatedSettings;
@property (readonly, nonatomic) VCMediaNegotiatorResultsAudio *negotiatedAudioSettings;
@property (readonly, nonatomic) VCMediaNegotiatorResultsVideo *negotiatedVideoSettings;
@property (readonly, nonatomic) VCMediaNegotiatorResultsVideo *negotiatedScreenSettings;
@property (readonly, nonatomic) VCMediaNegotiatorResultsMoments *negotiatedMomentsSettings;
@property (readonly, nonatomic) VCMediaNegotiatorResultsFaceTimeSettings *negotiatedFaceTimeSettings;
@property (readonly, nonatomic) NSMutableArray *negotiatedStreamGroups;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)initializeLocalConfiguration:(id)a0 negotiationData:(id)a1 deviceRole:(int)a2 preferredAudioPayload:(int)a3;

- (void)dealloc;
- (id)getPreferredVideoPayloadList:(id)a0;
- (id)negotiationData;
- (BOOL)processRemoteNegotiationData:(id)a0;
- (unsigned int)remoteMaxBandwidthForOperatingMode:(int)a0 connectionType:(int)a1;
- (id)initWithLocalSettings:(id)a0;

@end
