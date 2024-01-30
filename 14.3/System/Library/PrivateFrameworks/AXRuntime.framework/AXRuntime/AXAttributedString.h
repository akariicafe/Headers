@interface AXAttributedString : NSMutableString <NSCopying> {
    struct __CFAttributedString { } *_string;
}

+ (id)string;
+ (id)axAttributedStringWithString:(id)a0;

- (unsigned long long)length;
- (void)appendAXAttributedString:(id)a0;
- (id)attribute:(id)a0 atIndex:(unsigned long long)a1 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2;
- (id)substringFromIndex:(unsigned long long)a0;
- (id)initWithCFAttributedString:(struct __CFAttributedString { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)attributedString;
- (void)appendFormat:(id)a0;
- (void)removeAttributes:(id)a0;
- (BOOL)hasAttributes;
- (void)dealloc;
- (void)setAttribute:(id)a0 forKey:(id)a1;
- (id)initWithString:(id)a0;
- (id)coalescedFontAttributes;
- (BOOL)hasAttribute:(id)a0;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1;
- (void)enumerateAttributesUsingBlock:(id /* block */)a0;
- (id)string;
- (id)axStringByReplacingCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1;
- (id)stringByReplacingOccurrencesOfString:(id)a0 withString:(id)a1 options:(unsigned long long)a2 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (id)uppercaseString;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)attributesAtIndex:(long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (id)substringWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)axAttributedStringByReplacingOccurrencesOfString:(id)a0 withString:(id)a1;
- (id)lowercaseString;
- (void)setAttributes:(id)a0;
- (void)appendString:(id)a0;
- (id)description;
- (void)appendStringOrAXAttributedString:(id)a0;
- (id)coalescedAttributes;
- (void)convertAttachmentsWithBlock:(id /* block */)a0;
- (id)initWithStringOrAttributedString:(id)a0;
- (void)enumerateAttribute:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 options:(unsigned long long)a2 usingBlock:(id /* block */)a3;
- (id)_axRecursivelyPropertyListCoercedRepresentationWithError:(id *)a0;
- (void)setAttribute:(id)a0 forKey:(id)a1 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)attributedSubstringFromRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)isAXAttributedString;
- (void)setAttributes:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (const struct __CFAttributedString { } *)cfAttributedString;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (void)replaceString:(struct __CFString { } *)a0;
- (id)axAttributedStringDescription;
- (id)stringByTrimmingCharactersInSet:(id)a0;
- (id)_axRecursivelyReconstitutedRepresentationFromPropertyListWithError:(id *)a0;
- (id)attributeValueForKey:(id)a0;

@end
