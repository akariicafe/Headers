@protocol PVCompositeDelegate;

@interface PVCompositeDelegateEffect : PVEffect {
    struct atomic<int> { struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { _Atomic int __a_value; } __a_; } _loaded;
}

@property (retain, nonatomic) id<PVCompositeDelegate> renderDelegate;
@property (retain, nonatomic) id userContext;

+ (void)registerEffects;

- (void).cxx_destruct;
- (id)initWithEffectID:(id)a0;
- (BOOL)loadEffect;
- (void)releaseEffect;

@end
