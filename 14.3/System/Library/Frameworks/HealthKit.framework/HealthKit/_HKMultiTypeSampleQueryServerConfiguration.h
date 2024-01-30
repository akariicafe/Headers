@class HKMultiTypeQueryCursor;

@interface _HKMultiTypeSampleQueryServerConfiguration : HKQueryServerConfiguration

@property (copy, nonatomic) HKMultiTypeQueryCursor *queryCursor;
@property (nonatomic) unsigned long long limit;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
