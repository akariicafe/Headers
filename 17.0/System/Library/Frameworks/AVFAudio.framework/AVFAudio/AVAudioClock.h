@class AVAudioTime;

@interface AVAudioClock : NSObject {
    void *_impl;
}

@property (readonly, nonatomic) AVAudioTime *currentTime;

- (id)init;
- (void)dealloc;
- (id)initWithNode:(void *)a0;
- (id)awaitIOCycle:(unsigned int *)a0;
- (struct AudioTimeStamp { double x0; unsigned long long x1; double x2; unsigned long long x3; struct SMPTETime { short x0; short x1; unsigned int x2; unsigned int x3; unsigned int x4; short x5; short x6; short x7; short x8; } x4; unsigned int x5; unsigned int x6; })currentAudioTimeStamp;
- (long long)currentIONumberFrames;

@end
