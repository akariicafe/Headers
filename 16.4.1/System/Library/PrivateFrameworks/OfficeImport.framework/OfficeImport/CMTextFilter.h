@interface CMTextFilter : NSObject

+ (id)convertLineBreaksToParagraphBreaks:(id)a0;
+ (id)convertToVericalString:(id)a0;
+ (id)covertFormatString:(id)a0;
+ (id)filterHyperlinkField:(id)a0;
+ (id)filterSpecialCodes:(id)a0;
+ (id)filterToPreserveMultipleWhiteSpaces:(id)a0;

- (id)init;

@end
