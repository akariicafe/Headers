@class _UIStatusBar, UIView;

@interface UIStatusBar_Modern : UIStatusBar_Base

@property (class, weak, nonatomic) UIView *sensorActivityIndicator;

@property (retain, nonatomic) _UIStatusBar *statusBar;

+ (double)_heightForStyle:(long long)a0 orientation:(long long)a1 forStatusBarFrame:(BOOL)a2 inWindow:(id)a3 isAzulBLinked:(BOOL)a4;
+ (Class)_implementationClass;
+ (void)registerSensorActivityIndicator:(id)a0 forScreen:(id)a1;
+ (long long)_defaultStyleForRequestedStyle:(long long)a0 styleOverrides:(unsigned long long)a1 activeStyleOverride:(unsigned long long *)a2;
+ (id)sensorActivityIndicatorForScreen:(id)a0;

- (void)setOrientation:(long long)a0;
- (void)setForegroundAlpha:(double)a0 animationParameters:(id)a1;
- (void)forceUpdate:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForPartWithIdentifier:(id)a0;
- (void)statusBarServer:(id)a0 didReceiveDoubleHeightStatusString:(id)a1 forStyle:(long long)a2;
- (void)setLegibilityStyle:(long long)a0 animationParameters:(id)a1;
- (void)statusBarServer:(id)a0 didReceiveStatusBarData:(const struct { BOOL x0[46]; char x1[64]; char x2[64]; char x3[256]; int x4; int x5; int x6; int x7; char x8[100]; char x9[100]; char x10[100]; char x11[100]; char x12[2][100]; char x13[1024]; unsigned int x14; unsigned int x15; unsigned char x16 : 1; unsigned char x17 : 1; int x18; int x19; unsigned char x20 : 1; unsigned int x21; unsigned int x22; int x23; unsigned int x24; char x25[150]; int x26; int x27; unsigned char x28 : 1; unsigned char x29 : 1; unsigned char x30 : 1; char x31[256]; unsigned char x32 : 1; unsigned char x33 : 1; unsigned char x34 : 1; unsigned char x35 : 2; unsigned char x36 : 2; unsigned char x37 : 1; unsigned int x38; unsigned char x39 : 1; unsigned char x40 : 1; unsigned char x41 : 1; char x42[256]; char x43[256]; char x44[100]; unsigned char x45 : 1; unsigned char x46 : 1; unsigned char x47 : 1; unsigned char x48 : 1; unsigned char x49 : 1; double x50; unsigned char x51 : 1; unsigned char x52 : 1; unsigned char x53 : 1; char x54[100]; char x55[100]; char x56[256]; char x57[256]; } *)a1 withActions:(int)a2;
- (id)actionForPartWithIdentifier:(id)a0;
- (double)alphaForPartWithIdentifier:(id)a0;
- (long long)_effectiveStyleFromStyle:(long long)a0;
- (void)setAlpha:(double)a0 forPartWithIdentifier:(id)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)disabledPartIdentifiers;
- (long long)currentStyle;
- (id)enabledPartIdentifiers;
- (void)_requestStyle:(long long)a0 partStyles:(id)a1 animationParameters:(id)a2 forced:(BOOL)a3;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 showForegroundView:(BOOL)a1 wantsServer:(BOOL)a2 inProcessStateProvider:(id)a3;
- (void)setOffset:(struct UIOffset { double x0; double x1; })a0 forPartWithIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)setDisabledPartIdentifiers:(id)a0;
- (struct UIOffset { double x0; double x1; })offsetForPartWithIdentifier:(id)a0;
- (void)setMode:(long long)a0;
- (double)defaultDoubleHeight;
- (void)setAvoidanceFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 animationSettings:(id)a1 options:(unsigned long long)a2;
- (void)forceUpdateData:(BOOL)a0;
- (void)statusBarStateProvider:(id)a0 didPostStatusBarData:(const struct { BOOL x0[46]; char x1[64]; char x2[64]; char x3[256]; int x4; int x5; int x6; int x7; char x8[100]; char x9[100]; char x10[100]; char x11[100]; char x12[2][100]; char x13[1024]; unsigned int x14; unsigned int x15; unsigned char x16 : 1; unsigned char x17 : 1; int x18; int x19; unsigned char x20 : 1; unsigned int x21; unsigned int x22; int x23; unsigned int x24; char x25[150]; int x26; int x27; unsigned char x28 : 1; unsigned char x29 : 1; unsigned char x30 : 1; char x31[256]; unsigned char x32 : 1; unsigned char x33 : 1; unsigned char x34 : 1; unsigned char x35 : 2; unsigned char x36 : 2; unsigned char x37 : 1; unsigned int x38; unsigned char x39 : 1; unsigned char x40 : 1; unsigned char x41 : 1; char x42[256]; char x43[256]; char x44[100]; unsigned char x45 : 1; unsigned char x46 : 1; unsigned char x47 : 1; unsigned char x48 : 1; unsigned char x49 : 1; double x50; unsigned char x51 : 1; unsigned char x52 : 1; unsigned char x53 : 1; char x54[100]; char x55[100]; char x56[256]; char x57[256]; } *)a1 withActions:(int)a2;
- (void)setAction:(id)a0 forPartWithIdentifier:(id)a1;
- (void)jiggleLockIcon;
- (void)setForegroundColor:(id)a0 animationParameters:(id)a1;
- (void)statusBarServer:(id)a0 didReceiveStyleOverrides:(unsigned long long)a1;
- (void)setStyleRequest:(id)a0 animationParameters:(id)a1;
- (void).cxx_destruct;
- (void)setEnabledPartIdentifiers:(id)a0;
- (unsigned long long)_implicitStyleOverrideForStyle:(long long)a0;
- (id)_dataFromLegacyData:(const struct { BOOL x0[46]; char x1[64]; char x2[64]; char x3[256]; int x4; int x5; int x6; int x7; char x8[100]; char x9[100]; char x10[100]; char x11[100]; char x12[2][100]; char x13[1024]; unsigned int x14; unsigned int x15; unsigned char x16 : 1; unsigned char x17 : 1; int x18; int x19; unsigned char x20 : 1; unsigned int x21; unsigned int x22; int x23; unsigned int x24; char x25[150]; int x26; int x27; unsigned char x28 : 1; unsigned char x29 : 1; unsigned char x30 : 1; char x31[256]; unsigned char x32 : 1; unsigned char x33 : 1; unsigned char x34 : 1; unsigned char x35 : 2; unsigned char x36 : 2; unsigned char x37 : 1; unsigned int x38; unsigned char x39 : 1; unsigned char x40 : 1; unsigned char x41 : 1; char x42[256]; char x43[256]; char x44[100]; unsigned char x45 : 1; unsigned char x46 : 1; unsigned char x47 : 1; unsigned char x48 : 1; unsigned char x49 : 1; double x50; unsigned char x51 : 1; unsigned char x52 : 1; unsigned char x53 : 1; char x54[100]; char x55[100]; char x56[256]; char x57[256]; } *)a0;
- (id)_effectiveDataFromData:(id)a0 activeOverride:(unsigned long long)a1 canUpdateBackgroundActivity:(BOOL)a2;
- (void)_requestStyle:(long long)a0 partStyles:(id)a1 legibilityStyle:(long long)a2 foregroundColor:(id)a3 animationParameters:(id)a4 forced:(BOOL)a5;
- (void)_updateSemanticContentAttributeFromLegacyData:(const struct { BOOL x0[46]; char x1[64]; char x2[64]; char x3[256]; int x4; int x5; int x6; int x7; char x8[100]; char x9[100]; char x10[100]; char x11[100]; char x12[2][100]; char x13[1024]; unsigned int x14; unsigned int x15; unsigned char x16 : 1; unsigned char x17 : 1; int x18; int x19; unsigned char x20 : 1; unsigned int x21; unsigned int x22; int x23; unsigned int x24; char x25[150]; int x26; int x27; unsigned char x28 : 1; unsigned char x29 : 1; unsigned char x30 : 1; char x31[256]; unsigned char x32 : 1; unsigned char x33 : 1; unsigned char x34 : 1; unsigned char x35 : 2; unsigned char x36 : 2; unsigned char x37 : 1; unsigned int x38; unsigned char x39 : 1; unsigned char x40 : 1; unsigned char x41 : 1; char x42[256]; char x43[256]; char x44[100]; unsigned char x45 : 1; unsigned char x46 : 1; unsigned char x47 : 1; unsigned char x48 : 1; unsigned char x49 : 1; double x50; unsigned char x51 : 1; unsigned char x52 : 1; unsigned char x53 : 1; char x54[100]; char x55[100]; char x56[256]; char x57[256]; } *)a0;
- (void)_updateWithData:(id)a0 force:(BOOL)a1;
- (id)clockFont;

@end
