@class NSString, CADisplayLink;

@interface UIScrollTestToBottomParameters : NSObject

@property (nonatomic) int iterations;
@property (nonatomic) int delta;
@property (nonatomic) int scrollLength;
@property (nonatomic) float startOffset;
@property (readonly, nonatomic) float endOffset;
@property (nonatomic) unsigned long long axis;
@property (retain, nonatomic) NSString *currentTest;
@property (retain, nonatomic) CADisplayLink *displayLink;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithName:(id)a0 iterations:(int)a1 delta:(int)a2 length:(int)a3 startOffset:(float)a4 scrollAxis:(unsigned long long)a5;

@end
