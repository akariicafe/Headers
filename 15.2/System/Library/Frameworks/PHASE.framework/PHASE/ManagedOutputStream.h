@class PHASEExternalOutputStreamDefinition;

@interface ManagedOutputStream : NSObject

@property (nonatomic, getter=isStreamPaused) BOOL streamPaused;
@property (nonatomic, getter=isControllerPaused) BOOL controllerPaused;
@property (retain, nonatomic) PHASEExternalOutputStreamDefinition *definition;
@property (copy, nonatomic) id /* block */ renderBlock;

- (void).cxx_destruct;
- (id)initWithPaused:(BOOL)a0 definition:(id)a1 renderBlock:(id /* block */)a2;

@end
