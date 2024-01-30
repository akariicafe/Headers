@interface VCPacketBundler : NSObject {
    char *_buffer;
    unsigned int _bufferSize;
    unsigned int _maxPacketSize;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutex;
    unsigned int _packetsPerBundle;
    unsigned int _encodedBufferSize;
    unsigned int _accessUnitDataSectionSize;
    BOOL _currentBundleVoiceActivity;
    BOOL _lastBundleVoiceActivity;
    struct tagAccessUnitHeaderInfo { unsigned short accessUnitCount; unsigned short accessUnitSize[3]; } _accessUnitHeaderInfo;
    int _operatingMode;
}

@property (nonatomic) unsigned int maxPacketSize;
@property (nonatomic) BOOL allowLargePackets;
@property (nonatomic) int payload;
@property (nonatomic) unsigned int timestamp;
@property (nonatomic) int bundlingScheme;
@property (readonly, nonatomic) unsigned int packetsPerBundle;
@property (readonly, nonatomic) char *encodedBuffer;
@property (readonly, nonatomic) unsigned int encodedBufferSize;
@property (readonly, nonatomic) unsigned int bundledPackets;
@property (readonly, nonatomic) BOOL isFull;
@property (readonly, nonatomic) BOOL isTalkSpurtStart;
@property (readonly, nonatomic) unsigned char priority;

- (void)unlock;
- (void)lock;
- (void)dealloc;
- (void)resetBuffer;
- (BOOL)setPacketsPerBundle:(unsigned int)a0;
- (void)initLock;
- (BOOL)reallocateBufferWithMaxPacketSize:(unsigned int)a0 maxPacketCount:(unsigned int)a1;
- (void)releaseBundleBuffer;
- (unsigned int)bundleBufferSizeWidthMaxPacketSize:(unsigned int)a0 maxPacketCount:(unsigned int)a1;
- (char *)encodedBufferForRFC3640;
- (unsigned int)encodedBufferSizeForRFC3640;
- (unsigned int)accessUnitHeaderSectionSize;
- (char *)accessUnitDataSectionHead;
- (unsigned int)accessUnitHeaderSectionSizeMaximum;
- (BOOL)bundleAudioLegacy:(void *)a0 numInputBytes:(unsigned int)a1 payloadType:(int)a2 timestamp:(unsigned int)a3;
- (BOOL)bundleAudioRFC3640:(void *)a0 numInputBytes:(unsigned int)a1 payloadType:(int)a2 timestamp:(unsigned int)a3;
- (BOOL)_copyInputBytes:(void *)a0 numInputBytes:(unsigned int)a1 payloadType:(int)a2 timestamp:(unsigned int)a3;
- (void)updatePriority:(unsigned char)a0;
- (id)initWithOperatingMode:(int)a0;
- (BOOL)allocateBundleBuffer:(unsigned int)a0;
- (BOOL)bundleAudio:(void *)a0 numInputBytes:(unsigned int)a1 payloadType:(int)a2 timestamp:(unsigned int)a3 voiceActivity:(BOOL)a4 priority:(unsigned char)a5;

@end
