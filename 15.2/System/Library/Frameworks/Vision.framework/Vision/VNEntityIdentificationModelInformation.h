@class NSDate;

@interface VNEntityIdentificationModelInformation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long version;
@property (readonly, copy) NSDate *lastModificationDate;
@property (readonly, getter=isReadOnly) BOOL readOnly;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithVersion:(unsigned long long)a0 lastModificationDate:(id)a1 readOnly:(BOOL)a2;

@end
