@protocol NFDefinitionContainer;

@interface NFCallbackDefinition : NSObject

@property (readonly, nonatomic) id /* block */ callbackBlock;
@property (readonly, nonatomic) id<NFDefinitionContainer> privateContainer;

- (void).cxx_destruct;
- (id)initWithCallbackBlock:(id /* block */)a0 privateContainer:(id)a1;

@end
