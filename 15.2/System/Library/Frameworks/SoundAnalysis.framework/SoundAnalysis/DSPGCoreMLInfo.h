@class NSArray, DSPGMLInputProvider;
@protocol SNMLModel, MLFeatureProvider;

@interface DSPGCoreMLInfo : NSObject

@property (retain, nonatomic) id<SNMLModel> model;
@property (retain, nonatomic) NSArray *feedbackConnections;
@property (retain, nonatomic) DSPGMLInputProvider *inputProvider;
@property (retain, nonatomic) id<MLFeatureProvider> outputProvider;

- (void).cxx_destruct;

@end
