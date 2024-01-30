@interface PBSlideBase : NSObject

+ (unsigned long long)authorIdForName:(id)a0 state:(id)a1;
+ (unsigned char)mapDirection:(id)a0;
+ (void)mapSlideNumberPlaceholder:(id)a0 tgtSlideBase:(id)a1 state:(id)a2;
+ (id)newOptions:(long long)a0 transType:(int)a1;
+ (id)nonPlaceholderDrawablesAmongDrawables:(id)a0;
+ (void)parseSlideShowInfo:(struct PptSSSlideInfoAtom { void /* function */ **x0; unsigned short x1; struct EshHeader { int x0; unsigned int x1; short x2; unsigned short x3; unsigned char x4; } x2; void /* function */ **x3; int x4; BOOL x5; int x6; int x7; unsigned char x8; int x9; unsigned short x10; int x11; } *)a0 slideBase:(id)a1 state:(id)a2;
+ (int)parseTransType:(int)a0 direction:(long long)a1;
+ (BOOL)readColorScheme:(id)a0 colorScheme:(id)a1 colorMap:(id)a2 state:(id)a3;
+ (void)readComments:(id)a0 slide:(id)a1 state:(id)a2;
+ (void)readDrawingGroup:(id)a0 slide:(id)a1 state:(id)a2;
+ (BOOL)slideFollowsMasterBackground:(id)a0;

@end
