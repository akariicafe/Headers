@class HDOriginalFHIRResourceObject, NSArray;

@interface HDExtractionResultItem : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) HDOriginalFHIRResourceObject *originalFHIRResource;
@property (readonly, copy, nonatomic) NSArray *units;
@property (readonly, nonatomic) unsigned long long flags;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithOriginalFHIRResource:(id)a0 units:(id)a1 flags:(unsigned long long)a2;

@end
