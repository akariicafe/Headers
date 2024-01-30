@interface WFFocusModesManager : NSObject

+ (id)defaultActivity;
+ (id)availableModes;
+ (id)activeMode;
+ (id)availableModesForAutomationsDisplay;
+ (id)enteringSymbolForSymbolName:(id)a0;
+ (id)exitingSymbolForSymbolName:(id)a0;
+ (id)glyphToFilledGlyphMapping;

@end
