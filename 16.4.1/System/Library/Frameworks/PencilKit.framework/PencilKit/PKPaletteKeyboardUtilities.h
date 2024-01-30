@interface PKPaletteKeyboardUtilities : NSObject

+ (void)performReturn;
+ (id)combinedMenuFromKeyboardMenu:(id)a0 withLanguageMenu:(id)a1;
+ (BOOL)isReturnKeyEnabled;
+ (id)textInputResponderForEditing;
+ (long long)textInputReturnKeyTypeForEditing;
+ (id)textInputUndoManagerForEditing;

@end
