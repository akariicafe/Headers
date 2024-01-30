@class PMLSessionDescriptor;
@protocol PMLTransformerProtocol;

@interface SGTransformerInstance : NSObject

@property (retain, nonatomic) PMLSessionDescriptor *sessionDescriptor;
@property (retain, nonatomic) id<PMLTransformerProtocol> transformer;
@property (retain, nonatomic) Class modelClass;

+ (id)defaultWindowAndNgrams;
+ (id)defaultSessionDescriptorForModelId:(id)a0 featureVersion:(id)a1 language:(id)a2 windowAndNgrams:(id)a3;

- (void).cxx_destruct;
- (id)trainingFeaturesOf:(id)a0;
- (id)initWithTransformer:(id)a0 sessionDescriptor:(id)a1 modelClass:(Class)a2;

@end
