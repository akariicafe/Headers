@interface NSMutableCharacterSet : NSCharacterSet <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)characterSetWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
+ (id)decomposableCharacterSet;
+ (id)illegalCharacterSet;
+ (id)characterSetWithBitmapRepresentation:(id)a0;
+ (id)newlineCharacterSet;
+ (id)controlCharacterSet;
+ (id)symbolCharacterSet;
+ (id)decimalDigitCharacterSet;
+ (id)characterSetWithContentsOfFile:(id)a0;
+ (id)punctuationCharacterSet;
+ (id)whitespaceAndNewlineCharacterSet;
+ (id)nonBaseCharacterSet;
+ (id)uppercaseLetterCharacterSet;
+ (id)whitespaceCharacterSet;
+ (id)alphanumericCharacterSet;
+ (id)capitalizedLetterCharacterSet;
+ (id)characterSetWithCharactersInString:(id)a0;
+ (id)letterCharacterSet;
+ (id)lowercaseLetterCharacterSet;

- (void)removeCharactersInString:(id)a0;
- (void)addCharactersInString:(id)a0;
- (void)invert;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)formIntersectionWithCharacterSet:(id)a0;
- (void)formUnionWithCharacterSet:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)removeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)isMutable;
- (id)init;
- (void)addCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
