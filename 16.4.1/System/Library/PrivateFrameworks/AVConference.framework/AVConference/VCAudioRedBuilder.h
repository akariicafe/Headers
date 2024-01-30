@class NSPointerArray;

@interface VCAudioRedBuilder : NSObject {
    unsigned int _sampleRate;
    unsigned int _samplesPerFrame;
    BOOL _includeSequenceOffset;
    struct tagVCAudioRedPayload { int payloadType; char *buffer; int bufferLength; unsigned int timestamp; BOOL isRedAudio; unsigned char redCount; unsigned char sequenceOffset; unsigned char priority; } _latestPrimaryPayload;
    NSPointerArray *_selectedRedPayloads;
    struct tagVCAudioRedPayload { int payloadType; char *buffer; int bufferLength; unsigned int timestamp; BOOL isRedAudio; unsigned char redCount; unsigned char sequenceOffset; unsigned char priority; } _redPayloadToSend;
    unsigned char _redPayloadBufferToSend[1472];
    struct tagVCAudioRedPayload { int payloadType; char *buffer; int bufferLength; unsigned int timestamp; BOOL isRedAudio; unsigned char redCount; unsigned char sequenceOffset; unsigned char priority; } _payloadHistory[9];
    unsigned int _payloadHistoryCount;
    char *_payloadBufferHistory;
    int _payloadBufferHistoryIndex;
}

@property (nonatomic) unsigned int numPayloads;
@property (nonatomic) unsigned int maxDelay;
@property (readonly, nonatomic) int redPayloadType;

+ (unsigned int)redOverheadForNumPayloads:(unsigned int)a0;

- (void)dealloc;
- (struct tagVCAudioRedPayload { int x0; char *x1; int x2; unsigned int x3; BOOL x4; unsigned char x5; unsigned char x6; unsigned char x7; } *)buildRedPayloadWithPrimaryPayload:(struct tagVCAudioRedPayload { int x0; char *x1; int x2; unsigned int x3; BOOL x4; unsigned char x5; unsigned char x6; unsigned char x7; } *)a0 redPayloads:(id)a1;
- (id)initWithRedPayloadType:(int)a0 sampleRate:(unsigned int)a1 samplesPerFrame:(unsigned int)a2 numPayloads:(unsigned int)a3 maxDelay:(unsigned int)a4 includeSequenceOffset:(BOOL)a5;
- (BOOL)isPayloadTimestampWithinThreshold:(struct tagVCAudioRedPayload { int x0; char *x1; int x2; unsigned int x3; BOOL x4; unsigned char x5; unsigned char x6; unsigned char x7; } *)a0 forTimestamp:(unsigned int)a1;
- (struct tagVCAudioRedPayload { int x0; char *x1; int x2; unsigned int x3; BOOL x4; unsigned char x5; unsigned char x6; unsigned char x7; } *)nearestRedPayloadForTimestamp:(unsigned int)a0;
- (id)payloadHistoryDescription;
- (id)redPayloadDescription:(struct tagVCAudioRedPayload { int x0; char *x1; int x2; unsigned int x3; BOOL x4; unsigned char x5; unsigned char x6; unsigned char x7; } *)a0;
- (struct tagVCAudioRedPayload { int x0; char *x1; int x2; unsigned int x3; BOOL x4; unsigned char x5; unsigned char x6; unsigned char x7; } *)redPayloadForPrimaryPayload:(struct tagVCAudioRedPayload { int x0; char *x1; int x2; unsigned int x3; BOOL x4; unsigned char x5; unsigned char x6; unsigned char x7; } *)a0;
- (BOOL)redundantPayloads:(id)a0 containsPointer:(void *)a1;
- (id)redundantPayloadsDescription:(id)a0;
- (char *)resetOutputPayload:(struct tagVCAudioRedPayload { int x0; char *x1; int x2; unsigned int x3; BOOL x4; unsigned char x5; unsigned char x6; unsigned char x7; } *)a0;
- (void)resetPayloadHistory;
- (id)selectRedPayloadsForPrimaryPayload:(struct tagVCAudioRedPayload { int x0; char *x1; int x2; unsigned int x3; BOOL x4; unsigned char x5; unsigned char x6; unsigned char x7; } *)a0;

@end
