@class NSString, NSMutableAttributedString;

@interface TMLAttributedString : NSObject <NSCopying, TMLAttributedStringJSExports>

@property (copy, nonatomic) NSString *string;
@property (copy, nonatomic) NSMutableAttributedString *attributedString;
@property (readonly, nonatomic) unsigned long long length;

+ (void)initializeJSContext:(id)a0;
+ (id)attributedStringWithFormat:(id)a0 attributes:(id)a1;

- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withAttributedString:(id)a1;
- (void)deleteCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)initWithAttributedString:(id)a0;
- (void)addAttribute:(id)a0 value:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)addAttributes:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)removeAttribute:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setAttributes:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)init;
- (struct CGSize { double x0; double x1; })size;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1;
- (void).cxx_destruct;
- (void)insertAttributedString:(id)a0 atIndex:(unsigned long long)a1;
- (void)appendAttributedString:(id)a0;
- (id)attributedStringWithAttachment:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundingRectWithSize:(struct CGSize { double x0; double x1; })a0 options:(long long)a1;
- (id)NSAttributedString;
- (id)enumerateAttribute:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 options:(unsigned long long)a2;

@end
