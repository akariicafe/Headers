@class HKElectrocardiogramSessionConfiguration;

@interface HKElectrocardiogramSessionTaskConfiguration : HKTaskConfiguration <NSCopying>

@property (copy, nonatomic) HKElectrocardiogramSessionConfiguration *sessionConfiguration;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
