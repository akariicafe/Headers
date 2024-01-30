@class BWNodeOutput;

@interface BWStillImageDisparitySplitterNode : BWNode {
    id *_outputs;
    unsigned long long _numberOfOutputs;
}

@property (readonly, nonatomic) BWNodeOutput *disparityOutput;
@property (readonly, nonatomic) BWNodeOutput *processedOutput;

+ (void)initialize;

- (void)handleDroppedSample:(id)a0 forInput:(id)a1;
- (void)didSelectFormat:(id)a0 forInput:(id)a1 forAttachedMediaKey:(id)a2;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (id)nodeType;
- (id)init;
- (id)nodeSubType;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (void)dealloc;

@end
