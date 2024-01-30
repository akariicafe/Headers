@class NSString;

@interface OZFxPlugProgressAPI : NSObject <FxProgressAPI, PROAPIObject>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedProgressAPI;
+ (void)releaseSharedProgressAPI;

- (id)init;
- (BOOL)updateProgress:(float)a0;
- (BOOL)userHasCancelled;
- (BOOL)conformsToProtocol:(id)a0 version:(unsigned int)a1;
- (void)_setControl:(const struct OZProcessControl { void /* function */ **x0; struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__1::__cxx_atomic_base_impl<bool> > { _Atomic BOOL x0; } x0; } x1; struct PCSemaphore *x2; struct PCMutex *x3; long long x4; void /* function */ *x5; struct HGRenderer *x6; } *)a0;

@end
