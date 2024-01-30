@class NSDate;

@interface PKPassDateRangeField : PKPassDateField

@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSDate *endDate;

+ (BOOL)supportsSecureCoding;

- (id)asDictionary;
- (void)encodeWithCoder:(id)a0;
- (id)value;
- (id)asMuteDictionary;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
