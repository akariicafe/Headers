@class UVAgentSceneSpecification;

@interface PSSceneSpecification : NSObject

@property (class, readonly, nonatomic) PSSceneSpecification *previewSceneSpecification;
@property (class, readonly, nonatomic) PSSceneSpecification *mainSceneSpecification;

@property (readonly, nonatomic) UVAgentSceneSpecification *specification;

- (id)initWithSpecification:(id)a0;
- (void).cxx_destruct;

@end
