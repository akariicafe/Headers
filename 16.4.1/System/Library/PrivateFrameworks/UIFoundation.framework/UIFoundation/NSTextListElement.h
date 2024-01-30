@class NSArray, NSDictionary, NSTextList, NSAttributedString;

@interface NSTextListElement : NSTextParagraph {
    long long _indentLevel;
    long long _itemNumber;
    long long _contentsLocationOffset;
    BOOL _contentsOnly;
}

@property (weak) NSTextListElement *parentElement;
@property (copy) id /* block */ markerTextAttributesForTextList;
@property (readonly) long long _contentsLocationOffset;
@property (readonly) NSTextList *textList;
@property (readonly) NSAttributedString *contents;
@property (readonly) NSDictionary *markerAttributes;
@property (readonly) NSAttributedString *attributedString;
@property (readonly, copy) NSArray *childElements;

+ (id)_createChildElementsFromAttributedString:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 indentLevel:(long long)a2 effectiveRange:(out struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a3 textListElementInstantiationCallback:(id /* block */)a4;
+ (id)_createElementWithChildElements:(id)a0 textList:(id)a1 nestingLevel:(long long)a2;
+ (id)_createTextListElementFromAttributedString:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 indentLevel:(long long)a2 effectiveRange:(out struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a3 textListElementInstantiationCallback:(id /* block */)a4;
+ (id)_createUpdatedTextTabsForTextTabs:(id)a0 markerLocation:(double)a1 listLocation:(double)a2;
+ (void)_fillTextListElement:(id)a0 toAttributedString:(id)a1;
+ (id)_formattedAttributedStringForRootTextListElement:(id)a0;
+ (id)_rootTextListElementFromAttributedString:(id)a0 atIndex:(long long)a1 effectiveRange:(out struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2 textListElementInstantiationCallback:(id /* block */)a3;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })_textListElementContentsRangeForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inAttributedString:(id)a1;
+ (id)textListElementWithChildElements:(id)a0 textList:(id)a1 nestingLevel:(long long)a2;
+ (id)textListElementWithContents:(id)a0 markerAttributes:(id)a1 textList:(id)a2 childElements:(id)a3;

- (id)_createConfiguredParagraphStyleForParagraphStyle:(id)a0;
- (BOOL)contentsOnly;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeForLocation:(id)a0 allowsTrailingEdge:(BOOL)a1;
- (id)_markerString;
- (void)dealloc;
- (id)_markerTextAttributesForTextList:(id)a0 attributes:(id)a1;
- (long long)itemNumber;
- (BOOL)_appendsParagraphSeparator;
- (id)textListElementWithChildElements:(id)a0;
- (double)_indentOffset;
- (BOOL)isRepresentedElement;
- (long long)_indentLevel;
- (double)_markerOffset;
- (long long)indentLevel;
- (void)_reparentWithTextListElement:(id)a0 itemNumber:(long long)a1;
- (id)initWithParentElement:(id)a0 textList:(id)a1 contents:(id)a2 markerAttributes:(id)a3 childElements:(id)a4;
- (id)locationForCharacterIndex:(long long)a0 actualRange:(out struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (void).cxx_destruct;
- (void)setParagraphContentRange:(id)a0;

@end
