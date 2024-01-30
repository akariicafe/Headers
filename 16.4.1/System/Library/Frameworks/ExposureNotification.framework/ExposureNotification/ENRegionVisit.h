@class ENRegion, NSDate;

@interface ENRegionVisit : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) ENRegion *region;
@property (readonly, copy, nonatomic) NSDate *date;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithRegion:(id)a0 date:(id)a1;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;

@end
