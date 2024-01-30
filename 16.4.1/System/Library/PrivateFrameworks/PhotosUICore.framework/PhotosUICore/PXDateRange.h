@interface PXDateRange : NSObject <NSCopying>

@property (readonly) double startDate;
@property (readonly) double endDate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithStartDate:(double)a0 endDate:(double)a1;
- (id)description;
- (BOOL)intersectsRange:(id)a0;
- (BOOL)isStrictlyBeforeRange:(id)a0;

@end
