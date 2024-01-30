@class NSString;

@interface IMMessagePartGUID : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct IMMessagePartRanges { struct _NSRange { unsigned long long location; unsigned long long length; } prefixRange; struct _NSRange { unsigned long long location; unsigned long long length; } partNumberRange; struct _NSRange { unsigned long long location; unsigned long long length; } messageGUIDRange; } ranges;
@property (readonly, copy, nonatomic) NSString *encodedMessagePartGUID;
@property (readonly, copy, nonatomic) NSString *messageGUID;
@property (readonly, copy, nonatomic) NSString *prefix;
@property (readonly, nonatomic) unsigned long long partNumber;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } prefixRange;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } partNumberRange;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } messageGUIDRange;

+ (id)encodeMessagePartGUID:(id)a0 prefix:(id)a1 partNumber:(unsigned long long)a2;
+ (id)encodeMessagePartGUID:(id)a0 prefix:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (BOOL)decodeRangesWithEncodedGuid:(id)a0 ranges:(struct IMMessagePartRanges { struct _NSRange { unsigned long long x0; unsigned long long x1; } x0; struct _NSRange { unsigned long long x0; unsigned long long x1; } x1; struct _NSRange { unsigned long long x0; unsigned long long x1; } x2; } *)a1;
- (id)initWithEncodedMessagePartGUID:(id)a0 messageGUID:(id)a1 prefix:(id)a2 partNumber:(unsigned long long)a3 ranges:(struct IMMessagePartRanges { struct _NSRange { unsigned long long x0; unsigned long long x1; } x0; struct _NSRange { unsigned long long x0; unsigned long long x1; } x1; struct _NSRange { unsigned long long x0; unsigned long long x1; } x2; })a4;
- (id)initWithEncodedMessagePartGUID:(id)a0;
- (id)initWithMessageGUID:(id)a0 prefix:(id)a1 partNumber:(unsigned long long)a2;
- (id)initWithMessageGUID:(id)a0 prefix:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
