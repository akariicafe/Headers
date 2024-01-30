@class BWRingBuffer;

@interface BWMotionSampleRingBuffer : NSObject <NSFastEnumeration> {
    BWRingBuffer *_ringBuffer;
    double _maxDuration;
    int _maxCount;
}

- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)dealloc;
- (struct { BOOL x0; double x1; struct { double x0; double x1; double x2; double x3; } x2; } *)lastSample;
- (void)addMotionDataToRingBuffer:(struct { BOOL x0; double x1; struct { double x0; double x1; double x2; double x3; } x2; } *)a0 withSampleCount:(int)a1;
- (id)initWithMaxDuration:(double)a0;
- (double)duration;
- (unsigned long long)count;

@end
