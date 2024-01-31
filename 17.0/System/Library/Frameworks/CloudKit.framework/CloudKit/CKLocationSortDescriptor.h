@class CLLocation;

@interface CKLocationSortDescriptor : NSSortDescriptor <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) CLLocation *relativeLocation;

- (void)encodeWithCoder:(id)a0;
- (id)CKPropertiesDescription;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)compareObject:(id)a0 toObject:(id)a1;
- (id)initWithKey:(id)a0 relativeLocation:(id)a1;

@end
