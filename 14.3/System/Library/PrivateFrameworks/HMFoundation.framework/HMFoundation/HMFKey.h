@class NSString, NSData;

@interface HMFKey : HMFObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long size;
@property (readonly, copy) NSString *type;
@property (readonly, copy) NSData *data;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToData:(id)a0;
- (id)shortDescription;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithType:(id)a0 size:(unsigned long long)a1 data:(id)a2;

@end
