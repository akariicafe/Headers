@interface UIPasteboard_QSExtras : __UIPasteboard_QSExtras_super

+ (id)pasteboardWithUniqueName;
+ (id)pasteboardWithName:(id)a0 create:(BOOL)a1;
+ (id)safeCategoryTargetClassName;
+ (BOOL)_accessibilityUseQuickSpeakPasteBoard;
+ (id)_accessibilityQuickSpeakPasteboard;
+ (void)_accessibilitySetUseQuickSpeakPasteBoard:(BOOL)a0;
+ (Class)safeCategoryBaseClass;
+ (id)generalPasteboard;

- (id)URL;
- (void)setStrings:(id)a0;
- (long long)numberOfItems;
- (id)colors;
- (id)URLs;
- (void)addItems:(id)a0;
- (id)string;
- (BOOL)containsPasteboardTypes:(id)a0;
- (id)dataForPasteboardType:(id)a0;
- (id)pasteboardTypes;
- (id)valueForPasteboardType:(id)a0;
- (void)setValue:(id)a0 forPasteboardType:(id)a1;
- (void)setData:(id)a0 forPasteboardType:(id)a1;
- (id)pasteboardTypesForItemSet:(id)a0;
- (BOOL)containsPasteboardTypes:(id)a0 inItemSet:(id)a1;
- (id)itemSetWithPasteboardTypes:(id)a0;
- (id)valuesForPasteboardType:(id)a0 inItemSet:(id)a1;
- (id)dataForPasteboardType:(id)a0 inItemSet:(id)a1;
- (long long)changeCount;
- (id)strings;
- (id)items;
- (id)color;
- (BOOL)_accessibilityShouldSwapReceiverWithQuickSpeakPasteboard;
- (void)setItems:(id)a0;
- (id)images;
- (id)image;

@end
