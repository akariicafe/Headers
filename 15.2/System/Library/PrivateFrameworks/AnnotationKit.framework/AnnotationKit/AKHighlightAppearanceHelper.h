@interface AKHighlightAppearanceHelper : NSObject

+ (long long)attributeTagForHighlightOfColor:(id)a0;
+ (id)colorForNoteOfHighlightAttributeTag:(long long)a0;
+ (id)borderColorForNoteOfHighlightAttributeTag:(long long)a0;
+ (id)colorForHighlightAttributeWithTag:(long long)a0;
+ (BOOL)highlightColor:(id)a0 isEquivalentToHighlightColor:(id)a1;
+ (int)annotationStyleForHighlightAttributeWithTag:(long long)a0;
+ (long long)attributeTagForNoteOfColor:(id)a0;

@end
