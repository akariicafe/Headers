@class NSObject;
@protocol OS_dispatch_queue;

@interface BWMetadataSourceNode : BWSourceNode {
    BOOL _running;
    struct OpaqueCMClock { } *_clock;
    NSObject<OS_dispatch_queue> *_emitSamplesDispatchQueue;
}

@property (readonly, nonatomic) struct opaqueCMFormatDescription { } *formatDescription;

+ (void)initialize;

- (struct OpaqueCMClock { } *)clock;
- (BOOL)start:(id *)a0;
- (BOOL)stop:(id *)a0;
- (id)nodeSubType;
- (void)dealloc;
- (id)initWithFormatDescription:(struct opaqueCMFormatDescription { } *)a0 clock:(struct OpaqueCMClock { } *)a1;
- (void)appendMetadataSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;

@end
