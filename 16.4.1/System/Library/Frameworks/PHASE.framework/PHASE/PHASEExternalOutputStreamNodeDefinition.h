@class NSUUID;

@interface PHASEExternalOutputStreamNodeDefinition : PHASEGeneratorNodeDefinition

@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) unsigned int channelLayoutTag;
@property (nonatomic) BOOL normalize;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (id)initWithExternalOutputStreamUUID:(id)a0 mixerDefinition:(id)a1 channelLayoutTag:(unsigned int)a2 uid:(id)a3;

@end
