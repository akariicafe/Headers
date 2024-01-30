@interface NSMutableCharacterSet : NSCharacterSet <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)whitespaceCharacterSet;
+ (id)uppercaseLetterCharacterSet;
+ (id)decimalDigitCharacterSet;
+ (id)characterSetWithCharactersInString:(id)a0;
+ (id)newlineCharacterSet;
+ (id)characterSetWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
+ (id)controlCharacterSet;
+ (id)symbolCharacterSet;
+ (id)punctuationCharacterSet;
+ (id)alphanumericCharacterSet;
+ (id)characterSetWithContentsOfFile:(id)a0;
+ (id)illegalCharacterSet;
+ (id)nonBaseCharacterSet;
+ (id)lowercaseLetterCharacterSet;
+ (id)characterSetWithBitmapRepresentation:(id)a0;
+ (id)decomposableCharacterSet;
+ (id)letterCharacterSet;
+ (id)capitalizedLetterCharacterSet;
+ (id)whitespaceAndNewlineCharacterSet;

- (void)removeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)invert;
- (void)formUnionWithCharacterSet:(id)a0;
- (void)removeCharactersInString:(id)a0;
- (void)addCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)addCharactersInString:(id)a0;
- (id)init;
- (void)formIntersectionWithCharacterSet:(id)a0;
- (BOOL)isMutable;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;

@end
