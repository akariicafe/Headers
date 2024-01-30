@interface PKPaletteKeyboardUtilities : NSObject

+ (void)performReturn;
+ (id)textInputResponderForEditing;
+ (id)textInputUndoManagerForEditing;
+ (long long)textInputReturnKeyTypeForEditing;
+ (BOOL)isReturnKeyEnabled;

@end
