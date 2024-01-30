@class VNPersonsModelAlgorithm, NSDate;

@interface VNPersonsModelInformation : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long version;
@property (readonly, copy, nonatomic) NSDate *lastModificationDate;
@property (readonly, copy, nonatomic) VNPersonsModelAlgorithm *algorithm;
@property (readonly, nonatomic, getter=isReadOnly) BOOL readOnly;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithVersion:(unsigned long long)a0 lastModificationDate:(id)a1 algorithm:(id)a2 readOnly:(BOOL)a3;

@end
