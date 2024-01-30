@class NSSet, DSPGMLInputProvider;
@protocol SNMLModel, MLFeatureProvider;

@interface DSPGCoreMLInfo : NSObject {
    id<SNMLModel> _model;
    NSSet *_feedbackConnections;
    DSPGMLInputProvider *_inputProvider;
    id<MLFeatureProvider> _outputProvider;
}

- (void).cxx_destruct;

@end
