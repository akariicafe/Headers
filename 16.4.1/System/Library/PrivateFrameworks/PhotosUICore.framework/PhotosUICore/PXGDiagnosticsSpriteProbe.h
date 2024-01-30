@class NSMutableArray, PXGSpriteDataStore;

@interface PXGDiagnosticsSpriteProbe : NSObject

@property (class, readonly, nonatomic) NSMutableArray *activeSpriteProbes;
@property (class, readonly, nonatomic) PXGSpriteDataStore *spriteDataStore;

@property (nonatomic, getter=isActive) BOOL active;
@property (copy, nonatomic) id /* block */ predicate;
@property (copy, nonatomic) id /* block */ tagDescriptor;
@property (copy, nonatomic) id /* block */ eventHandler;

+ (void)_recordEventIfNeededWithType:(long long)a0 layout:(id)a1 oldState:(const struct { struct { struct { double x0; double x1; double x2; } x0; } x0; struct { float x0; struct { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; } x1; float x2; float x3; float x4; float x5; unsigned short x6; unsigned char x7; float x8; struct { void /* unknown type, empty encoding */ x0[4]; } x9; } x1; struct { int x0; int x1; float x2; long long x3; unsigned short x4; unsigned char x5; } x2; } *)a2 newState:(const struct { struct { struct { double x0; double x1; double x2; } x0; } x0; struct { float x0; struct { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; } x1; float x2; float x3; float x4; float x5; unsigned short x6; unsigned char x7; float x8; struct { void /* unknown type, empty encoding */ x0[4]; } x9; } x1; struct { int x0; int x1; float x2; long long x3; unsigned short x4; unsigned char x5; } x2; } *)a3 userInfo:(id)a4;
+ (void)didAdjustSprites:(struct { unsigned int x0; struct *x1; struct *x2; struct *x3; struct *x4; })a0 forAnimation:(id)a1 appearing:(BOOL)a2;
+ (void)layout:(id)a0 didChangeSprites:(struct { unsigned int x0; struct *x1; struct *x2; struct *x3; struct *x4; })a1;
+ (void)layout:(id)a0 didInsertSprites:(struct { unsigned int x0; struct *x1; struct *x2; struct *x3; struct *x4; })a1;
+ (void)layout:(id)a0 willChangeSprites:(struct { unsigned int x0; struct *x1; struct *x2; struct *x3; struct *x4; })a1;
+ (void)layout:(id)a0 willRemoveSprites:(struct { unsigned int x0; struct *x1; struct *x2; struct *x3; struct *x4; })a1;
+ (void)shouldUseDoubleSidedAnimationForSprites:(struct { unsigned int x0; struct *x1; struct *x2; struct *x3; struct *x4; })a0 indexes:(id)a1 animation:(id)a2;
+ (void)willAdjustSprites:(struct { unsigned int x0; struct *x1; struct *x2; struct *x3; struct *x4; })a0 forAnimation:(id)a1 appearing:(BOOL)a2;
+ (void)willRequestTextureForSpriteWithGeometry:(const struct { struct { double x0; double x1; double x2; } x0; } *)a0 style:(const struct { float x0; struct { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; } x1; float x2; float x3; float x4; float x5; unsigned short x6; unsigned char x7; float x8; struct { void /* unknown type, empty encoding */ x0[4]; } x9; } *)a1 info:(const struct { int x0; int x1; float x2; long long x3; unsigned short x4; unsigned char x5; } *)a2 inLayout:(id)a3 textureInfo:(id)a4;

- (id)init;
- (void).cxx_destruct;
- (void)_recordEventIfNeededWithType:(long long)a0 layout:(id)a1 oldState:(const struct { struct { struct { double x0; double x1; double x2; } x0; } x0; struct { float x0; struct { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; } x1; float x2; float x3; float x4; float x5; unsigned short x6; unsigned char x7; float x8; struct { void /* unknown type, empty encoding */ x0[4]; } x9; } x1; struct { int x0; int x1; float x2; long long x3; unsigned short x4; unsigned char x5; } x2; } *)a2 newState:(const struct { struct { struct { double x0; double x1; double x2; } x0; } x0; struct { float x0; struct { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; } x1; float x2; float x3; float x4; float x5; unsigned short x6; unsigned char x7; float x8; struct { void /* unknown type, empty encoding */ x0[4]; } x9; } x1; struct { int x0; int x1; float x2; long long x3; unsigned short x4; unsigned char x5; } x2; } *)a3 userInfo:(id)a4;
- (void)_recordEventWithType:(long long)a0 oldState:(const struct { struct { struct { double x0; double x1; double x2; } x0; } x0; struct { float x0; struct { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; } x1; float x2; float x3; float x4; float x5; unsigned short x6; unsigned char x7; float x8; struct { void /* unknown type, empty encoding */ x0[4]; } x9; } x1; struct { int x0; int x1; float x2; long long x3; unsigned short x4; unsigned char x5; } x2; } *)a1 newState:(const struct { struct { struct { double x0; double x1; double x2; } x0; } x0; struct { float x0; struct { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; } x1; float x2; float x3; float x4; float x5; unsigned short x6; unsigned char x7; float x8; struct { void /* unknown type, empty encoding */ x0[4]; } x9; } x1; struct { int x0; int x1; float x2; long long x3; unsigned short x4; unsigned char x5; } x2; } *)a2 userInfo:(id)a3;
- (id)descriptionForSpriteState:(const struct { struct { struct { double x0; double x1; double x2; } x0; } x0; struct { float x0; struct { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; } x1; float x2; float x3; float x4; float x5; unsigned short x6; unsigned char x7; float x8; struct { void /* unknown type, empty encoding */ x0[4]; } x9; } x1; struct { int x0; int x1; float x2; long long x3; unsigned short x4; unsigned char x5; } x2; } *)a0;

@end
