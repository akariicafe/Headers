@class NSArray;

@interface JFXEffectsPreviewGeneratorJob : NSObject

@property (readonly, nonatomic) NSArray *outputNodes;
@property (readonly, nonatomic) NSArray *callbackKeys;

- (id)init;
- (void).cxx_destruct;
- (id)initWithRenderOutputs:(id)a0 callbackKeys:(id)a1;

@end
