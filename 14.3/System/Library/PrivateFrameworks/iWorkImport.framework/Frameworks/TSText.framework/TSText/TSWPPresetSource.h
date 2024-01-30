@interface TSWPPresetSource : NSObject <TSSPresetSource>

+ (id)presetKinds;
+ (void)bootstrapPresetsOfKind:(id)a0 inTheme:(id)a1 alternate:(int)a2;
+ (id)p_bootstrapStrokeInTheme:(id)a0 alternate:(int)a1 index:(unsigned long long)a2;
+ (void)p_bootstrapTextboxPresetsInTheme:(id)a0 alternate:(int)a1;
+ (void)p_bootstrapShapePresetsInTheme:(id)a0 alternate:(int)a1;
+ (void)p_bootstrapLinePresetsInTheme:(id)a0 alternate:(int)a1;
+ (void)p_bootstrapListPresetsInTheme:(id)a0 alternate:(int)a1;
+ (void)p_bootstrapTextStylePresetsInTheme:(id)a0 alternate:(int)a1;
+ (void)p_bootstrapDropCapStylePresetsInTheme:(id)a0 alternate:(int)a1;

@end
