@interface UIPasteboard_QSExtras : __UIPasteboard_QSExtras_super

+ (id)pasteboardWithName:(id)a0 create:(BOOL)a1;
+ (id)pasteboardWithUniqueName;
+ (Class)safeCategoryBaseClass;
+ (id)generalPasteboard;
+ (id)safeCategoryTargetClassName;
+ (BOOL)_accessibilityUseQuickSpeakPasteBoard;
+ (id)_accessibilityQuickSpeakPasteboard;
+ (void)_accessibilitySetUseQuickSpeakPasteBoard:(BOOL)a0;

- (long long)changeCount;
- (long long)numberOfItems;
- (id)strings;
- (id)string;
- (void)setItems:(id)a0;
- (void)setStrings:(id)a0;
- (id)colors;
- (void)addItems:(id)a0;
- (id)pasteboardTypes;
- (BOOL)containsPasteboardTypes:(id)a0;
- (id)dataForPasteboardType:(id)a0;
- (id)valueForPasteboardType:(id)a0;
- (void)setValue:(id)a0 forPasteboardType:(id)a1;
- (void)setData:(id)a0 forPasteboardType:(id)a1;
- (id)pasteboardTypesForItemSet:(id)a0;
- (BOOL)containsPasteboardTypes:(id)a0 inItemSet:(id)a1;
- (id)itemSetWithPasteboardTypes:(id)a0;
- (id)valuesForPasteboardType:(id)a0 inItemSet:(id)a1;
- (id)dataForPasteboardType:(id)a0 inItemSet:(id)a1;
- (id)color;
- (id)images;
- (id)image;
- (id)URL;
- (id)URLs;
- (id)items;
- (BOOL)_accessibilityShouldSwapReceiverWithQuickSpeakPasteboard;

@end
