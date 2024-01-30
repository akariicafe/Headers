@interface RBTransitionEffect : NSObject {
    struct Effect { unsigned char type; unsigned char events; unsigned char begin; unsigned char dur; } _effect;
    union EffectOrArg { struct Effect { unsigned char type; unsigned char events; unsigned char begin; unsigned char dur; } effect; float arg; int int_arg; } _args[2];
}

@property (nonatomic) unsigned int type;
@property (nonatomic) float beginTime;
@property (nonatomic) float duration;
@property (nonatomic) unsigned int events;

- (id).cxx_construct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (void)setArgumentValue:(float)a0 atIndex:(unsigned long long)a1;
- (float)argumentValueAtIndex:(unsigned long long)a0;

@end
