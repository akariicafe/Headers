@interface CTAttributedStringWrapper : NSObject

+ (id)attributedStringFromData:(id)a0 options:(id)a1 documentAttributes:(id *)a2 error:(id *)a3;
+ (BOOL)containsAttachments:(id)a0;
+ (id)dataFromAttributedString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 documentAttributes:(id)a2 error:(id *)a3;

@end
