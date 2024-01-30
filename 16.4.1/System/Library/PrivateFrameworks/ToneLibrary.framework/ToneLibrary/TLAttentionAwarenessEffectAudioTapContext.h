@class TLAttentionAwarenessEffectProcessor, NSUUID, TLAttentionAwarenessEffectCoordinator;

@interface TLAttentionAwarenessEffectAudioTapContext : NSObject

@property (retain, nonatomic) TLAttentionAwarenessEffectCoordinator *effectCoordinator;
@property (retain, nonatomic) TLAttentionAwarenessEffectProcessor *effectProcessor;
@property (readonly, nonatomic) NSUUID *identifier;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
