@class NSMutableArray, NSString, VCAudioRedBuilder, NSObject, NSLock;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface VCTextTransmitter : NSObject <VCTextSender> {
    struct _VCTextTransmitterConfiguration { struct tagHANDLE *rtpHandle; unsigned int sampleRate; BOOL isRedEnabled; unsigned int numRedundantPayloads; float txIntervalMin; } _config;
    double _txIntervalMin;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    double _startTime;
    VCAudioRedBuilder *_redBuilder;
    int _redPayloadType;
    int _currentPayloadType;
    BOOL _isIdle;
    NSLock *_textFramesSendQueueLock;
    NSMutableArray *_textFramesSendQueue;
    NSObject<OS_dispatch_source> *_heartbeat;
    double _idleDuration;
    unsigned int _emptyFramesToBeSent;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)stop;
- (BOOL)start;
- (id)initWithConfiguration:(struct _VCTextTransmitterConfiguration { struct tagHANDLE *x0; unsigned int x1; BOOL x2; unsigned int x3; float x4; } *)a0;
- (unsigned int)getCharTimestampForSystemTime:(double)a0;
- (void)heartbeat;
- (void)sendCharacter:(unsigned short)a0;
- (void)sendText:(id)a0;
- (void)sendTextFrameWithRedundancy:(id)a0 marker:(int)a1;
- (BOOL)startHeartbeat;
- (void)stopHeartbeat;
- (void)updatePayloadHistory:(id)a0 timestamp:(unsigned int)a1 payloadType:(int *)a2 payload:(char **)a3 payloadLength:(int *)a4;

@end
