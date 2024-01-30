@class NSString, PVEffect;

@interface PVEffectComponent : NSObject <PVEffectLoadDelegate, PVEffectPropertyDelegate>

@property (weak, nonatomic) PVEffect *effect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithEffect:(id)a0;
- (void).cxx_destruct;
- (void)effect:(id)a0 updateProperties:(id)a1 allProperties:(id)a2;
- (void)effectDidLoad:(id)a0 isReady:(BOOL)a1;
- (void)effectDidUnload:(id)a0;

@end
