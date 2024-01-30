@class NSString;

@interface NSAttributedString : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *string;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)_attributedStringWithFormat:(id)a0 options:(unsigned long long)a1 locale:(id)a2 arguments:(char *)a3;
+ (id)_localizedAttributedStringWithFormat:(id)a0 options:(unsigned long long)a1;
+ (id)_attributedStringAttributesFromKnownAttributeKeys:(id)a0;
+ (id)attributedStringFromMarkupString:(id)a0;
+ (id)_localizedAttributedStringWithFormat:(id)a0;
+ (void)_setAttributedDictionaryClass:(Class)a0;

- (id)cs_rangesMatchingPredicate:(id)a0;
- (void)cs_writeToFileHandle:(struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *)a0;
- (id)attributesAtIndex:(unsigned long long)a0 longestEffectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)_createAttributedSubstringWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)attributedSubstringFromRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 replacingCharactersInRanges:(const struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 numberOfRanges:(long long)a2 withString:(id)a3;
- (unsigned long long)length;
- (id)attribute:(id)a0 atIndex:(unsigned long long)a1 longestEffectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (id)attribute:(id)a0 atIndex:(unsigned long long)a1 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2;
- (void)enumerateAttributesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 options:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (id)_inflectedAttributedStringWithReplacements:(id)a0;
- (unsigned long long)_cfTypeID;
- (id)attributedStringByWeaklyAddingAttributes:(id)a0;
- (id)_initWithFormat:(id)a0 options:(unsigned long long)a1 locale:(id)a2 arguments:(char *)a3;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_firstValueOfAttributeWithKey:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)_inflectionLanguageForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned long long)hash;
- (id)attributesAtIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (id)_initWithFormat:(id)a0 options:(unsigned long long)a1 locale:(id)a2;
- (id)initWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToAttributedString:(id)a0;
- (void)enumerateAttribute:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 options:(unsigned long long)a2 usingBlock:(id /* block */)a3;
- (id)attributedSubstringFromRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (Class)classForCoder;
- (id)replacementObjectForPortCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
