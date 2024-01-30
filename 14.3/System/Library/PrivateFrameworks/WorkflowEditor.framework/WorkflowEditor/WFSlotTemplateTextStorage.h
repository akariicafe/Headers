@class UIFont, UIColor, NSArray, NSMutableSet, NSTextStorage, NSSet, NSParagraphStyle;
@protocol WFSlotTemplateTextStorageDelegate;

@interface WFSlotTemplateTextStorage : NSTextStorage

@property (readonly, nonatomic) NSTextStorage *textStorage;
@property (readonly, nonatomic) NSMutableSet *mutableHighlightedSlots;
@property (readonly, nonatomic) NSMutableSet *mutableSelectedSlots;
@property (readonly, nonatomic) NSMutableSet *mutableTypingSlots;
@property (nonatomic) unsigned long long editingLevel;
@property (weak, nonatomic) id<WFSlotTemplateTextStorageDelegate> delegate;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIFont *unpopulatedFont;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *tintColor;
@property (copy, nonatomic) NSParagraphStyle *paragraphStyle;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) UIColor *disabledSlotTitleColor;
@property (readonly, nonatomic) UIColor *disabledSlotBackgroundColor;
@property (copy, nonatomic) NSArray *contents;
@property (readonly, nonatomic) long long contentsTextAlignment;
@property (readonly, nonatomic) NSSet *highlightedSlots;
@property (readonly, nonatomic) NSSet *selectedSlots;
@property (readonly, nonatomic) NSSet *typingSlots;

- (id)init;
- (void).cxx_destruct;
- (void)setAttributes:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1;
- (id)string;
- (id)attributesAtIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (void)endEditing;
- (void)beginEditing;
- (void)enumerateContentInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 usingBlock:(id /* block */)a1;
- (void)didEndTypingInSlot:(id)a0;
- (void)didBeginTypingInSlot:(id)a0;
- (id)slotAtCharacterIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 effectiveContentRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2;
- (void)didUnhighlightSlot:(id)a0;
- (void)didHighlightSlot:(id)a0;
- (void)didDeselectSlot:(id)a0;
- (void)didSelectSlot:(id)a0;
- (void)setDisabledSlotTitleColor:(id)a0 backgroundColor:(id)a1;
- (unsigned long long)slotSpacingOpportunityAtCharacterIndex:(unsigned long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })characterRangeForSlot:(id)a0 includingInsideSpacingOpportunities:(BOOL)a1;
- (void)regenerateEntireAttributedString;
- (void)replaceAttribute:(id)a0 value:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)replaceAttributeInInanimateText:(id)a0 value:(id)a1;
- (id)attributedStringForSlot:(id)a0;
- (void)getColorsForSlot:(id)a0 titleColor:(out id *)a1 backgroundColor:(out id *)a2;
- (void)updateColorsForSlot:(id)a0;
- (void)updateColorsForAllSlots;
- (void)_updateColorsForSlot:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)stringForSlotSpacingOpportunity:(unsigned long long)a0;

@end
