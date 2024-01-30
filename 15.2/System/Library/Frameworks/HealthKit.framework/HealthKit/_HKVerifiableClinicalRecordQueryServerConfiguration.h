@class NSArray;

@interface _HKVerifiableClinicalRecordQueryServerConfiguration : HKQueryServerConfiguration

@property (copy, nonatomic) NSArray *recordTypes;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
