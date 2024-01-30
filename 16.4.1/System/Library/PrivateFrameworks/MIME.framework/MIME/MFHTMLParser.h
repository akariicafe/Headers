@interface MFHTMLParser : NSObject

+ (id)plainTextFromHTMLSnippet:(id)a0;
+ (id)plainTextFromHTML:(id)a0;
+ (id)plainTextFromHTML:(id)a0 limit:(unsigned long long)a1;
+ (id)plainTextFromHTML:(id)a0 limit:(unsigned long long)a1 preserveNewlines:(BOOL)a2;

@end
