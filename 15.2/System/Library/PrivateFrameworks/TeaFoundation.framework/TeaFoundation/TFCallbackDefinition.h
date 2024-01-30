@protocol TFDefinitionContainer;

@interface TFCallbackDefinition : NSObject

@property (readonly, nonatomic) id /* block */ callbackBlock;
@property (readonly, nonatomic) id<TFDefinitionContainer> privateContainer;

- (void).cxx_destruct;
- (id)initWithCallbackBlock:(id /* block */)a0 privateContainer:(id)a1;

@end
