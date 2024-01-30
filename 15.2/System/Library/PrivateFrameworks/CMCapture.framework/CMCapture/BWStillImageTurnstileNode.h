@class BWStillImageCoordinatorNode;

@interface BWStillImageTurnstileNode : BWNode {
    BWStillImageCoordinatorNode *_stillImageCoordinator;
}

+ (void)initialize;

- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (id)nodeSubType;
- (id)initWithStillImageCoordinator:(id)a0;
- (id)nodeType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (void)dealloc;

@end
