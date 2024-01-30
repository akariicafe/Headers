@class NSArray;

@interface RBTransition : NSObject {
    struct Transition { unsigned char method; BOOL implicit; unsigned char _add_remove_duration; unsigned int max_changes; struct vector<RB::Transition::EffectOrArg, 4UL, unsigned int> { unsigned char _p[16]; union EffectOrArg)"_size"I"_capacity"I { } *_p; unsigned int _size; unsigned int _capacity; } effects_and_args; } _transition;
    BOOL _is_default;
}

@property (class, readonly, nonatomic) RBTransition *defaultTransition;

@property (nonatomic) unsigned int method;
@property (nonatomic) unsigned int maxChanges;
@property (nonatomic, getter=isReplaceable) BOOL replaceable;
@property (readonly, copy, nonatomic) NSArray *effects;
@property (nonatomic) float addRemoveDuration;

- (id).cxx_construct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)addEffect:(id)a0;
- (void).cxx_destruct;

@end
