@class NSMutableArray, NSMutableDictionary;

@interface VCMomentsHistoryBuffer : NSObject {
    id _delegate;
    int _bufferLength;
    NSMutableArray *_timestampQueue;
    NSMutableDictionary *_sampleMap;
    unsigned int _lastTimestamp;
}

- (id)delegate;
- (void)flushBuffer;
- (void)dealloc;
- (void)dequeueOneFrame;
- (void)enqueueWithSample:(struct opaqueCMSampleBuffer { } *)a0 timestamp:(unsigned int)a1;
- (struct opaqueCMSampleBuffer { } *)getClosestSampleForTimestamp:(unsigned int)a0;
- (int)getCount;
- (unsigned int)getUpdatedTimestampWithTimestamp:(unsigned int)a0;
- (id)initWithDelegate:(id)a0 bufferLength:(int)a1 dispatchQueue:(id)a2;
- (void)updateBufferWithSample:(struct opaqueCMSampleBuffer { } *)a0 timestamp:(unsigned int)a1;

@end
