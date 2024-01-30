@interface CKAutoupdatingRelativeDateFormatter : CKAutoupdatingDateFormatter

+ (id)relativeStringFromDate:(id)a0;
+ (id)weekdayTemplateCharacters;
+ (id)relativeDateFormatter;

- (id)stringFromDate:(id)a0;
- (id)stringFromDate:(id)a0 isRelative:(BOOL *)a1;

@end
