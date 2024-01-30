@interface PKPaletteKeyboardUtilities : NSObject

+ (void)performReturn;
+ (id)textInputResponderForEditing;
+ (id)textInputUndoManagerForEditing;
+ (long long)textInputReturnKeyTypeForEditing;
+ (BOOL)isReturnKeyEnabled;
+ (id)combinedMenuFromKeyboardMenu:(id)a0 withLanguageMenu:(id)a1;

@end
