@interface CLSReportItem : NSObject <NSCopying>

+ (id)sum:(id)a0;
+ (id)median:(id)a0;
+ (id)mean:(id)a0;
+ (id)midrange:(id)a0;
+ (id)multiply:(id)a0 withScalar:(double)a1;

- (id)sum:(id)a0;
- (long long)compare:(id)a0;
- (void)add:(id)a0;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)scalarMultiply:(double)a0;
- (id)convertToItemCompatibleWithItem:(id)a0;
- (id)convertToItemCompatibleWithItem:(id)a0 copyIfSameType:(BOOL)a1;
- (id)scalarProduct:(double)a0;

@end
