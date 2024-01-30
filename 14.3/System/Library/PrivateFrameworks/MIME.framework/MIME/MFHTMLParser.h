@interface MFHTMLParser : NSObject

+ (id)plainTextFromHTML:(id)a0;
+ (id)plainTextFromHTML:(id)a0 limit:(unsigned long long)a1 preserveNewlines:(BOOL)a2;
+ (id)plainTextFromHTMLSnippet:(id)a0;
+ (id)plainTextFromHTML:(id)a0 limit:(unsigned long long)a1;

@end
