@protocol VCSessionDownlinkBandwidthAllocatorClient;

@interface VCSessionBandwidthAllocationTableEntry : NSObject {
    BOOL _onDemand;
}

@property (readonly) id<VCSessionDownlinkBandwidthAllocatorClient> client;
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

+ (long long)compareAudioEntry:(id)a0 audioEntry:(id)a1;
+ (long long)compareAudioEntry:(id)a0 videoEntry:(id)a1;
+ (long long)compareVideoEntry:(id)a0 videoEntry:(id)a1;

- (void)dealloc;
- (long long)compare:(id)a0;
- (id)description;
- (id)initWithClient:(id)a0 type:(unsigned char)a1 networkBitrate:(unsigned int)a2 mediaBitrate:(unsigned int)a3 qualityIndex:(unsigned int)a4 streamID:(unsigned int)a5;
- (id)initWithClient:(id)a0 type:(unsigned char)a1 networkBitrate:(unsigned int)a2 mediaBitrate:(unsigned int)a3 qualityIndex:(unsigned int)a4 streamID:(unsigned int)a5 hasRepairStreamID:(BOOL)a6 repairStreamID:(unsigned int)a7 repairMaxNetworkBitrate:(unsigned int)a8 subscribedTo:(BOOL)a9 startOnDemand:(BOOL)a10;

@end
