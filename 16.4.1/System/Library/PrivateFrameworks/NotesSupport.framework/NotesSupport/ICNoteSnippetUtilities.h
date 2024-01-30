@interface ICNoteSnippetUtilities : NSObject

+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeForTitleInContent:(id)a0 truncated:(BOOL *)a1;
+ (id)snippetForContent:(id)a0;
+ (id)stringByRemovingTitle:(id)a0 fromString:(id)a1;
+ (id)titleForContent:(id)a0 truncated:(BOOL *)a1;
+ (id)snippetAndTitleTrimCharacterSet;

@end
