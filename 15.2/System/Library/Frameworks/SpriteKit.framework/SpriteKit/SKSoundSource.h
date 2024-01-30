@class NSMutableArray;

@interface SKSoundSource : NSObject {
    unsigned int _sourceId;
    NSMutableArray *_buffers;
}

@property (nonatomic) BOOL shouldLoop;
@property (nonatomic) double gain;
@property (nonatomic) struct CGPoint { double x0; double x1; } position;
@property (readonly, nonatomic) BOOL isPlaying;
@property (readonly, nonatomic) int completedBufferCount;
@property (readonly, nonatomic) int queuedBufferCount;

+ (id)source;
+ (id)sourceWithBuffer:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (void)pause;
- (BOOL)play;
- (void)dealloc;
- (void)stop;
- (void)queueBuffer:(id)a0;
- (void)purgeCompletedBuffers;

@end
