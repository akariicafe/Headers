@class TLAttentionAwarenessEffectProcessor, NSUUID, TLAttentionAwarenessEffectCoordinator;

@interface TLAttentionAwarenessEffectAudioTapContext : NSObject

@property (weak, nonatomic) TLAttentionAwarenessEffectCoordinator *effectCoordinator;
@property (retain, nonatomic) TLAttentionAwarenessEffectProcessor *effectProcessor;
@property (readonly, nonatomic) NSUUID *identifier;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
