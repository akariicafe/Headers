@class NSData;

@interface NSCharacterSet : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly, copy) NSCharacterSet *URLUserAllowedCharacterSet;
@property (class, readonly, copy) NSCharacterSet *URLPasswordAllowedCharacterSet;
@property (class, readonly, copy) NSCharacterSet *URLHostAllowedCharacterSet;
@property (class, readonly, copy) NSCharacterSet *URLPathAllowedCharacterSet;
@property (class, readonly, copy) NSCharacterSet *URLQueryAllowedCharacterSet;
@property (class, readonly, copy) NSCharacterSet *URLFragmentAllowedCharacterSet;
@property (class, readonly, copy) NSCharacterSet *controlCharacterSet;
@property (class, readonly, copy) NSCharacterSet *whitespaceCharacterSet;
@property (class, readonly, copy) NSCharacterSet *whitespaceAndNewlineCharacterSet;
@property (class, readonly, copy) NSCharacterSet *decimalDigitCharacterSet;
@property (class, readonly, copy) NSCharacterSet *letterCharacterSet;
@property (class, readonly, copy) NSCharacterSet *lowercaseLetterCharacterSet;
@property (class, readonly, copy) NSCharacterSet *uppercaseLetterCharacterSet;
@property (class, readonly, copy) NSCharacterSet *nonBaseCharacterSet;
@property (class, readonly, copy) NSCharacterSet *alphanumericCharacterSet;
@property (class, readonly, copy) NSCharacterSet *decomposableCharacterSet;
@property (class, readonly, copy) NSCharacterSet *illegalCharacterSet;
@property (class, readonly, copy) NSCharacterSet *punctuationCharacterSet;
@property (class, readonly, copy) NSCharacterSet *capitalizedLetterCharacterSet;
@property (class, readonly, copy) NSCharacterSet *symbolCharacterSet;
@property (class, readonly, copy) NSCharacterSet *newlineCharacterSet;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSData *bitmapRepresentation;
@property (readonly, copy) NSCharacterSet *invertedSet;

+ (void)initialize;
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

- (BOOL)characterIsMember:(unsigned short)a0;
- (struct __CFCharacterSet { } *)_expandedCFCharacterSet;
- (id)_retainedBitmapRepresentation;
- (BOOL)isEmpty;
- (id)init;
- (unsigned long long)_cfTypeID;
- (BOOL)isMutable;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)makeImmutable;
- (unsigned long long)hash;
- (BOOL)isSupersetOfSet:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)longCharacterIsMember:(unsigned int)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasMemberInPlane:(unsigned char)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)count;
- (id)replacementObjectForPortCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
