@interface CHTextInputScriptSpec : NSObject

+ (BOOL)isCharacterEmoji:(id)a0;
+ (BOOL)isCharacterFullWidth:(id)a0;
+ (BOOL)isRightToLeftScriptForCharacter:(id)a0;
+ (BOOL)isSkippableScriptCode:(int)a0;
+ (int)scriptCodeForCodepoint:(unsigned int)a0;
+ (id)scriptHistogramForString:(id)a0;
+ (BOOL)shouldCorrectionGesturesSnapToTokensForScriptCode:(int)a0;
+ (BOOL)shouldRelaxCharacterBoundsPercentageOverlapForScript:(int)a0;
+ (int)singleScriptCodeForString:(id)a0;

@end
