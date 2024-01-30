@class NSNumber;
@protocol VCSessionDownlinkBandwidthAllocatorClient;

@interface VCSessionBandwidthAllocationTableEntry : NSObject {
    BOOL _onDemand;
}

@property (readonly) id<VCSessionDownlinkBandwidthAllocatorClient> client;
@property (readonly) unsigned int minNetworkBitrate;
@property (readonly) unsigned int maxNetworkBitrate;
@property (readonly) unsigned int maxMediaBitrate;
@property (readonly) unsigned int qualityIndex;
@property BOOL isLowestQualityAudio;
@property BOOL isLowestQualityVideo;
@property (readonly) unsigned char type;
@property (readonly) unsigned int streamID;
@property unsigned int actualNetworkBitrate;
@property (readonly) unsigned int repairStreamID;
@property (readonly) unsigned int repairMaxNetworkBitrate;
@property (readonly) BOOL hasRepairStreamID;
@property (getter=isSubscribedTo) BOOL subscribedTo;
@property (readonly, getter=isStartOnDemand) BOOL startOnDemand;
@property (readonly) NSNumber *streamToken;
@property (readonly) unsigned int streamGroupID;
@property (readonly) unsigned int encoderGroupID;

+ (unsigned char)entryTypeForMediaType:(unsigned int)a0;
+ (long long)compareAudioEntry:(id)a0 audioEntry:(id)a1;
+ (long long)compareAudioEntry:(id)a0 videoEntry:(id)a1;
+ (long long)compareVideoEntry:(id)a0 videoEntry:(id)a1;

- (long long)compare:(id)a0;
- (id)description;
- (void)dealloc;
- (id)initWithClient:(id)a0 type:(unsigned char)a1 streamToken:(long long)a2 networkBitrate:(unsigned int)a3 mediaBitrate:(unsigned int)a4 qualityIndex:(unsigned int)a5 streamID:(unsigned int)a6 streamGroupID:(unsigned int)a7;
- (id)initWithClient:(id)a0 type:(unsigned char)a1 streamToken:(long long)a2 minNetworkBitrate:(unsigned int)a3 maxNetworkBitrate:(unsigned int)a4 mediaBitrate:(unsigned int)a5 qualityIndex:(unsigned int)a6 streamID:(unsigned int)a7 hasRepairStreamID:(BOOL)a8 repairStreamID:(unsigned int)a9 repairMaxNetworkBitrate:(unsigned int)a10 subscribedTo:(BOOL)a11 startOnDemand:(BOOL)a12 streamGroupID:(unsigned int)a13 encoderGroupID:(unsigned int)a14;

@end
