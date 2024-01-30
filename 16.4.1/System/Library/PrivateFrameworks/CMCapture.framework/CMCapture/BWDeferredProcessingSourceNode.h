@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface BWDeferredProcessingSourceNode : BWSourceNode {
    NSObject<OS_dispatch_queue> *_emitSamplesDispatchQueue;
    BOOL _running;
}

@property (readonly, nonatomic) NSMutableDictionary *outputsByPortType;

+ (void)initialize;

- (id)outputForPortType:(id)a0;
- (BOOL)start:(id *)a0;
- (void)dealloc;
- (BOOL)stop:(id *)a0;
- (id)initWithPortTypes:(id)a0 attributes:(id)a1 colorSpaceProperties:(int)a2;
- (id)portTypeForOutput:(id)a0;
- (void)processBuffer:(struct opaqueCMSampleBuffer { } *)a0;

@end
