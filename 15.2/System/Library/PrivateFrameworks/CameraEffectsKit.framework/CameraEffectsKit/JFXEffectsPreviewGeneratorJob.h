@class NSArray;

@interface JFXEffectsPreviewGeneratorJob : NSObject

@property (readonly, nonatomic) NSArray *outputNodes;
@property (readonly, nonatomic) NSArray *callbackKeys;

- (void).cxx_destruct;
- (id)init;
- (id)initWithRenderOutputs:(id)a0 callbackKeys:(id)a1;

@end
