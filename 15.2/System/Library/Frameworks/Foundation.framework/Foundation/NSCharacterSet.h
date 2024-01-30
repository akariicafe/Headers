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

- (BOOL)hasMemberInPlane:(unsigned char)a0;
- (BOOL)isSupersetOfSet:(id)a0;
- (BOOL)characterIsMember:(unsigned short)a0;
- (BOOL)longCharacterIsMember:(unsigned int)a0;
- (struct __CFCharacterSet { } *)_expandedCFCharacterSet;
- (id)_retainedBitmapRepresentation;
- (BOOL)isMutable;
- (void)encodeWithCoder:(id)a0;
- (void)makeImmutable;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)_cfTypeID;
- (BOOL)isEmpty;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)replacementObjectForPortCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (unsigned long long)hash;

@end
