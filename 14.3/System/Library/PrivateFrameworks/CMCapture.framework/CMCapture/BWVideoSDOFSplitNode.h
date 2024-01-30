@class BWNodeOutput;

@interface BWVideoSDOFSplitNode : BWFanOutNode {
    struct opaqueCMFormatDescription { } *_originalVideoFormatDescription;
}

@property (readonly, nonatomic) BWNodeOutput *originalOutput;
@property (readonly, nonatomic) BWNodeOutput *sdofOutput;

+ (void)initialize;

- (id)init;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)dealloc;

@end
