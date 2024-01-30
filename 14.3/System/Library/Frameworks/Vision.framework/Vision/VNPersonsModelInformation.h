@class NSDate;

@interface VNPersonsModelInformation : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long version;
@property (readonly, copy, nonatomic) NSDate *lastModificationDate;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithVersion:(unsigned long long)a0 lastModificationDate:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
