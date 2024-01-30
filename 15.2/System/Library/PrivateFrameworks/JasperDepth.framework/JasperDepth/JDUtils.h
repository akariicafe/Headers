@interface JDUtils : NSObject

+ (int)getPresetFromOperationModeNumber:(unsigned short)a0;
+ (const struct PresetName { int x0; id x1; } *)getPresets;
+ (int)getPresetFromName:(id)a0;
+ (id)getPresetName:(int)a0;
+ (id)getMacroAIndices;
+ (id)getMacroBIndices;

@end
