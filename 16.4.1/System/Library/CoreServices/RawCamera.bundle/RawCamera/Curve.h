@interface Curve : NSObject

@property (copy) id /* block */ function;
@property (copy) id /* block */ inverse;
@property (readonly) double domainMin;
@property (readonly) double domainMax;
@property (readonly) double rangeMin;
@property (readonly) double rangeMax;

+ (id)curve;
+ (id)curveWithCount:(int)a0 xvalues:(double *)a1 yvalues:(double *)a2;
+ (id)curveWithGamma:(double)a0;
+ (id)curveWith:(id)a0 of:(id)a1;
+ (id)curveWithBlock:(id /* block */)a0 andInverse:(id /* block */)a1;
+ (id)curveWithBlock:(id /* block */)a0 domainMin:(double)a1 domainMax:(double)a2;
+ (id)curveWithCount:(int)a0 domainMin:(double)a1 domainMax:(double)a2 values:(double *)a3;
+ (id)curveWithInverseOf:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWith:(id)a0 of:(id)a1;
- (id)initWithBlock:(id /* block */)a0 andInverse:(id /* block */)a1;
- (id)initWithBlock:(id /* block */)a0 domainMin:(double)a1 domainMax:(double)a2;
- (id)initWithCount:(int)a0 domainMin:(double)a1 domainMax:(double)a2 values:(double *)a3;
- (id)initWithCount:(int)a0 xvalues:(double *)a1 yvalues:(double *)a2;
- (id)initWithGamma:(double)a0;
- (id)initWithInverseOf:(id)a0;

@end
