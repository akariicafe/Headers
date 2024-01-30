@class LAUIPKGlyphWrapper, LAUIAuthenticationCore, NSString;
@protocol LAUIAuthenticationDelegate;

@interface LAUIAuthenticationView : UIView <LAUIAuthenticationCoreDelegate, LAUIAuthentication> {
    long long _lastState;
}

@property (readonly, nonatomic) LAUIAuthenticationCore *authenticationCore;
@property (readonly, nonatomic) LAUIPKGlyphWrapper *glyphWrapper;
@property (weak, nonatomic) id<LAUIAuthenticationDelegate> delegate;
@property (nonatomic) long long glyphStyle;
@property (nonatomic) long long style;
@property (nonatomic) BOOL idleWhenDone;
@property (nonatomic) BOOL fastAnimations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })defaultRect;

- (id)initWithCoder:(id)a0;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didMoveToSuperview;
- (void)willMoveToSuperview:(id)a0;
- (void).cxx_destruct;
- (id)callerIconBundlePath;
- (id)localizedCallerName;
- (void)_setupView;
- (void)authenticationResult:(id)a0 error:(id)a1 context:(id)a2;
- (void)biometricNoMatch;
- (BOOL)disableMechanism:(unsigned long long)a0 error:(id *)a1;
- (BOOL)enableMechanism:(unsigned long long)a0 error:(id *)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 mechanisms:(unsigned long long)a1;
- (BOOL)isMechanismEnabled:(unsigned long long)a0;
- (long long)_stateOfSuccess;
- (void)_biometryIdle;
- (void)_setupMechanisms:(unsigned long long)a0 context:(id)a1;
- (void)biometryState:(long long)a0 completionHandler:(id /* block */)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 mechanisms:(unsigned long long)a1 context:(id)a2;
- (id)initWithMechanisms:(unsigned long long)a0;
- (id)initWithMechanisms:(unsigned long long)a0 context:(id)a1;
- (BOOL)isMechanismActive:(unsigned long long)a0;
- (BOOL)isMechanismAvailable:(unsigned long long)a0 error:(id *)a1;
- (void)notification:(long long)a0 original:(id)a1 mechanism:(unsigned long long)a2;
- (void)tappedFaceID:(id)a0;

@end
