@class NSString;

@interface EFStringHash : NSObject <NSCopying, NSSecureCoding, EFPubliclyDescribable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long primitiveHash;
@property (readonly, nonatomic) long long int64Value;
@property (readonly, copy, nonatomic) NSString *stringValue;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithHash:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0;
- (id)initWithString:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedStringValue;
- (id)_hexStringFromHash:(long long)a0;
- (id)initWithMD5Digest:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
