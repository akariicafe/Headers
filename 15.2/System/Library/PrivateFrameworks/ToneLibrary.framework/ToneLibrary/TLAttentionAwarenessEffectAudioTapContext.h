@class TLAttentionAwarenessEffectProcessor, NSUUID, TLAttentionAwarenessEffectCoordinator;

@interface TLAttentionAwarenessEffectAudioTapContext : NSObject

@property (retain, nonatomic) TLAttentionAwarenessEffectCoordinator *effectCoordinator;
@property (retain, nonatomic) TLAttentionAwarenessEffectProcessor *effectProcessor;
@property (readonly, nonatomic) NSUUID *identifier;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (unsigned long long)hash;

@end
