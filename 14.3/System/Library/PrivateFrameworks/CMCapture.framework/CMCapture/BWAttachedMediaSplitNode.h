@class NSArray, NSMutableDictionary, NSMutableSet;

@interface BWAttachedMediaSplitNode : BWFanOutNode {
    NSArray *_attachedMediaKeys;
    NSMutableDictionary *_attachedMediaFormatDescriptions;
    NSArray *_attachedMediaToPropagateToPrimaryOutput;
    NSMutableSet *_disabledAttachedMediaKeys;
    int _numOutputs;
    BOOL _emitsNodeErrorsForMissingAttachedMedia;
}

+ (void)initialize;

- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (void)didSelectFormat:(id)a0 forInput:(id)a1 forAttachedMediaKey:(id)a2;
- (void)setEmitsNodeErrorsForMissingAttachedMedia:(BOOL)a0;
- (id)nodeSubType;
- (BOOL)emitsNodeErrorsForMissingAttachedMedia;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)dealloc;
- (id)initWithAttachedMediaKeys:(id)a0 attachedMediaToPropagateToPrimaryOutput:(id)a1;
- (void)setOutputRenderingEnabled:(BOOL)a0 forAttachedMediaKey:(id)a1;
- (BOOL)isOutputRenderingEnabledForAttachedMediaKey:(id)a0;
- (id)initWithAttachedMediaKeys:(id)a0;

@end
