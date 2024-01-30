@interface EFMeasuredObject : NSObject

@property (retain, nonatomic) id object;
@property (nonatomic) double measure;

+ (id)max:(id)a0;
+ (id)object:(id)a0 withMeasure:(double)a1;
+ (id)reverseSortedObjects:(id)a0 limit:(unsigned long long)a1;

- (long long)compare:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithObject:(id)a0 measure:(double)a1;

@end
