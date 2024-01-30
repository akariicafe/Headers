@class PHASEExternalInputStreamDefinition;

@interface PHASEExternalInputStream : PHASEExternalStream {
    id /* block */ _receiverBlock;
}

@property (readonly, nonatomic) PHASEExternalInputStreamDefinition *definition;
@property (nonatomic, getter=isMuted) BOOL mute;

+ (id)new;
+ (void)streamWithEngine:(id)a0 definition:(id)a1 startsPaused:(BOOL)a2 delegate:(id)a3 receiverBlock:(id /* block */)a4 callback:(id /* block */)a5;
+ (void)streamWithEngine:(id)a0 uuid:(id)a1 definition:(id)a2 startsPaused:(BOOL)a3 delegate:(id)a4 receiverBlock:(id /* block */)a5 callback:(id /* block */)a6;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithStreamGroupUUID:(id)a0 streamUUID:(id)a1 engine:(id)a2 streamDefinition:(id)a3 startsPaused:(BOOL)a4 delegate:(id)a5 receiverBlock:(id /* block */)a6;

@end
