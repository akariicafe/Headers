@interface NSMutableCharacterSet : NSCharacterSet <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)controlCharacterSet;
+ (id)illegalCharacterSet;
+ (id)letterCharacterSet;
+ (id)decomposableCharacterSet;
+ (id)characterSetWithBitmapRepresentation:(id)a0;
+ (id)uppercaseLetterCharacterSet;
+ (id)alphanumericCharacterSet;
+ (id)capitalizedLetterCharacterSet;
+ (id)characterSetWithContentsOfFile:(id)a0;
+ (id)whitespaceAndNewlineCharacterSet;
+ (id)symbolCharacterSet;
+ (id)characterSetWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
+ (id)whitespaceCharacterSet;
+ (id)newlineCharacterSet;
+ (id)nonBaseCharacterSet;
+ (id)punctuationCharacterSet;
+ (id)lowercaseLetterCharacterSet;
+ (id)decimalDigitCharacterSet;
+ (id)characterSetWithCharactersInString:(id)a0;

- (void)invert;
- (void)removeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)addCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)formIntersectionWithCharacterSet:(id)a0;
- (void)formUnionWithCharacterSet:(id)a0;
- (BOOL)isMutable;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)removeCharactersInString:(id)a0;
- (void)addCharactersInString:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
