@interface WebAnimationDelegate : NSObject {
    struct PlatformCALayer { void /* function */ **x0; struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> > { _Atomic unsigned int x0; } x0; } x1; int x2; unsigned long long x3; struct RetainPtr<CALayer> { void *x0; } x4; struct PlatformCALayerClient *x5; } *m_owner;
}

- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)animationDidStart:(id)a0;
- (void)setOwner:(struct PlatformCALayer { void /* function */ **x0; struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> > { _Atomic unsigned int x0; } x0; } x1; int x2; unsigned long long x3; struct RetainPtr<CALayer> { void *x0; } x4; struct PlatformCALayerClient *x5; } *)a0;

@end
