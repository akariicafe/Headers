@interface CLSReportItem : NSObject <NSCopying>

+ (id)median:(id)a0;
+ (id)sum:(id)a0;
+ (id)mean:(id)a0;
+ (id)midrange:(id)a0;
+ (id)multiply:(id)a0 withScalar:(double)a1;

- (void)add:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)sum:(id)a0;
- (long long)compare:(id)a0;
- (void)scalarMultiply:(double)a0;
- (id)convertToItemCompatibleWithItem:(id)a0;
- (id)convertToItemCompatibleWithItem:(id)a0 copyIfSameType:(BOOL)a1;
- (id)scalarProduct:(double)a0;

@end
