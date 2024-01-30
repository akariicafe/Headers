@interface CHTextInputScriptSpec : NSObject

+ (BOOL)isSkippableScriptCode:(int)a0;
+ (int)singleScriptCodeForString:(id)a0;
+ (BOOL)shouldCorrectionGesturesSnapToTokensForScriptCode:(int)a0;
+ (BOOL)isCharacterFullWidth:(id)a0;
+ (BOOL)isRightToLeftScriptForCharacter:(id)a0;
+ (BOOL)shouldRelaxCharacterBoundsPercentageOverlapForScript:(int)a0;

@end
