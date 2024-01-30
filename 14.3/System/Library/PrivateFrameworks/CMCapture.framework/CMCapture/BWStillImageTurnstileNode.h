@class BWStillImageCoordinatorNode;

@interface BWStillImageTurnstileNode : BWNode {
    BWStillImageCoordinatorNode *_stillImageCoordinator;
}

+ (void)initialize;

- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (id)nodeType;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (void)dealloc;
- (id)initWithStillImageCoordinator:(id)a0;

@end
