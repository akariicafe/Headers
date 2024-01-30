@class PHASEExternalOutputStreamDefinition;

@interface PHASEExternalOutputStream : PHASEExternalStream {
    id /* block */ _renderBlock;
}

@property (readonly, nonatomic) PHASEExternalOutputStreamDefinition *definition;

+ (id)new;
+ (void)streamWithEngine:(id)a0 uuid:(id)a1 definition:(id)a2 startsPaused:(BOOL)a3 delegate:(id)a4 renderBlock:(id /* block */)a5 callback:(id /* block */)a6;
+ (void)streamWithEngine:(id)a0 definition:(id)a1 startsPaused:(BOOL)a2 delegate:(id)a3 renderBlock:(id /* block */)a4 callback:(id /* block */)a5;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)initWithGroupUUID:(id)a0 streamUUID:(id)a1 engine:(id)a2 streamDefinition:(id)a3 startsPaused:(BOOL)a4 delegate:(id)a5 renderBlock:(id /* block */)a6;

@end
