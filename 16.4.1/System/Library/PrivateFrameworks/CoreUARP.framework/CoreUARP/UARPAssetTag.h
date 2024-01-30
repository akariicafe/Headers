@interface UARPAssetTag : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) char char1;
@property (readonly) char char2;
@property (readonly) char char3;
@property (readonly) char char4;
@property (readonly) unsigned int tag;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (const char *)decodeCharForKey:(id)a0 key:(id)a1;
- (id)initWithChar1:(char)a0 char2:(char)a1 char3:(char)a2 char4:(char)a3;

@end
