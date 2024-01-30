@class NSArray;

@interface _HKCompoundFilter : _HKFilter {
    unsigned long long _subfilterCount;
}

@property (readonly, nonatomic) unsigned long long compoundPredicateType;
@property (readonly, copy, nonatomic) NSArray *subfilters;

+ (id)compoundFilterWithFilter:(id)a0 otherFilter:(id)a1;
+ (id)orFilterWithSubfilters:(id)a0;
+ (BOOL)supportsSecureCoding;
+ (id)andFilterWithSubfilters:(id)a0;
+ (id)notFilterWithSubfilter:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithType:(unsigned long long)a0 subfilters:(id)a1;
- (id)initWithCoder:(id)a0;
- (BOOL)acceptsDataObject:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (long long)acceptsActivitySummary:(id)a0;
- (long long)acceptsDataObjectWithStartTimestamp:(double)a0 endTimestamp:(double)a1 valueInCanonicalUnit:(double)a2;
- (void)encodeWithCoder:(id)a0;

@end
