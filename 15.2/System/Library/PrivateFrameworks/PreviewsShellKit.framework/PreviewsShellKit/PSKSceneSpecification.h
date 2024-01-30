@class UVAgentSceneSpecification;

@interface PSKSceneSpecification : NSObject

@property (class, readonly, nonatomic) PSKSceneSpecification *previewSceneSpecification;
@property (class, readonly, nonatomic) PSKSceneSpecification *mainSceneSpecification;

@property (readonly, nonatomic) UVAgentSceneSpecification *specification;

- (id)initWithSpecification:(id)a0;
- (void).cxx_destruct;

@end
